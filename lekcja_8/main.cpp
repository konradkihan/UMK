#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

void zad91(string name){
    /* Napisz program zapisujący do pliku tekst wprowadzony przez użytkownika. Użytkownik
    wprowadza kolejne fragmenty tekstu z klawiatury i zatwierdza je klawiszem Enter. Program
    powinien zakończyć działanie po wpisaniu przez użytkownika słowa KONIEC. */
    fstream plik;
    plik.open(name, ios::out);
    if(!plik.good()) cout << "Blad otwarcia pliku";
    cout << "Rozpocznij wprowadzanie danych:" << endl;
    while (true){
        string x;
        cout << ">>> ";
        cin >> x;
        if(x == "KONIEC") break;
        plik << x << endl;
    }
    plik.close();
}

void zad92(string name){
    /* Napisz program odczytujący zawartość pliku tekstowego i wypisujący ją na ekran. */
    fstream plik;
    string x;
    plik.open(name, ios::in);
    if(!plik.good()) cout << "Blad odczytu pliku";
    else{
        while(getline(plik, x)){
            cout << x << endl;
        }
    }
    plik.close();
}

void zad93(string name){
    /* Napisz program dopisujący do istniejącego pliku tekst wprowadzony przez użytkownika.
    Użytkownik wprowadza kolejne fragmenty tekstu z klawiatury i zatwierdza je klawiszem Enter. 
    Program powinien zakończyć działanie po wpisaniu przez użytkownika słowa KONIEC. */
    fstream plik;
    plik.open(name, ios::app);
    if(!plik.good()) cout << "Blad odczytu pliku";
    else{
        cout << "Rozpocznij wprowadzanie danych:" << endl;
        while (true){
            string x;
            cout << ">>> ";
            cin >> x;
            if(x == "KONIEC") break;
            plik << x << endl;
        }
        plik.close();
    }
}

void zad94(string name_in, string name_out){
    /* Napisz program, który odczyta tekst z jednego pliku i zapisze go do drugiego. */
    fstream plik_in, plik_out;
    plik_in.open(name_in, ios::in);
    plik_out.open(name_out, ios::out);
    string x;
    if(!plik_in.good() || !plik_out.good() ) cout << "Blad odczytu pliku";
    else{
        while(getline(plik_in, x)){
            plik_out << x << endl;
        }
    }
}

int zad95(string name){
    /* Napisz program sprawdzający ile razy w pliku tekstowym występuje znak wprowadzony
z klawiatury przez użytkownika*/
    fstream plik;
    string x;
    char chr;
    int wyst = 0;
    plik.open(name, ios::in);
    cout << "Jaki znak liczyc? >>> ";
    cin >> chr;
    if(!plik.good()) cout << "Blad odczytu pliku";
    else{
        while(getline(plik, x)){
            for(int i=0; i < x.size(); i++)
            if(x[i] == chr) wyst++;
        }
    }
    plik.close();
    return wyst;
}

void zad96(string name){
    /* Napisz program, który wylosuje 1 000 000 liczb naturalnych z przedziału [1,1 000 000]
    i zapisze je do pliku tekstowego. */
    fstream plik;
    plik.open(name, ios::out);
    int x;
    for(int i=0; i < 1000000; i++){
        x = 1 + rand() % 1000000;
        plik << x << endl;
    }
    plik.close();
}

void zad97(string name){
    /* Napisz program, który odczyta wszystkie liczby naturalne z pliku tekstowego i wyświetli
    na ekranie ilość odczytanych liczb, ich sumę, średnią arytmetyczną oraz największą i najmniejszą liczbę. */
    fstream plik;
    plik.open(name, ios::in);
    int x;
    if(!plik.good()) cout << "Blad odczytu pliku";
    else{
        int min = 0, max = 0;
        long double sum = 0;
        while(plik >> x){
            if(x < min) min = x;
            else if (x > max) max = x;
            sum += x;
        }
        plik.close();
        cout << "Min: " << min << endl << "Max: " << max << endl
        << "Sum: " << sum << endl << "Avg: " << sum/1000000.0 << endl;
    }
}





int main(){
    zad97("zad96.txt");
}
