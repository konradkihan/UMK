#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void write(string name){
    // read and wirte
    fstream plik;
    /*read only
    istream 
    write only
    ofstream*/
    plik.open(name, ios::out); // pierwsyz parametr to nazwa pliku, drugi to tryb otwarcia (out - zapis)
    /* tryby otwarcia ios::
    app - append
    out - nowy jeśli nie istnieje lub nadpisz zawartość 
    in - odczyt*/
    
    if(!plik.good()) cout << "Blad otwarcia pliku";
    else{
        cout << "podaj tekst: ";
        int x = 20;
        double b = 3.3;
        // string x;
        // cin >> x;
        plik << x << b;

    plik.close();
    }
}


void read(string name){
    fstream plik;
    string x;
    plik.open(name, ios::in);
    if(!plik.good()) cout << "Blad odczytu pliku";
    else{
        while(getline(plik, x)){
            cout << x << endl;
        }
        /* ALTERNATYWNIE
        wihle(!plik.eof()){
            getline(plik, x);
            cout<< x << endl;
        }
        METODA NIEZALECANA */
    }
}

void sum(string name){
    fstream plik;
    string x;
    plik.open(name, ios::in);
    if(!plik.good()) cout << "Blad odczytu pliku";
    else{
        double liczba, suma = 0;
        while(plik >> liczba){
            suma += liczba;
        }
        cout << suma;
    }
}

int main(){
    //write("dokument.txt");
    write("liczby.txt");
}