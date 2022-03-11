#include<iostream>
#include<string>
#include <algorithm>
#include<fstream> // biblioteka do obłsugi plików

using namespace std;


void odczyt_z_pliku(){
    string nazwa = "plik.txt";
    fstream plik; // tworzenie typu pliku
    plik.open(nazwa, ios::in);   // otwarcie pliku w trybie do odczytu

    if(!plik.good()) cout << "Błąd"; // zabezpieczenie jeśli plik się nie otworzy poprawnie
    else{
        string linijka;
        while (getline(plik, linijka)) // odczyt wszystkich linijek z pliku od początku do końca
        {
            cout << linijka;
        }
        plik.close();
    }

}

void zapis_do_pliku(){
    string nazwa = "plik.txt";
    fstream plik;   // tworzenie typu pliku
    plik.open(nazwa, ios::out);      // otwarcie pliku w trybie zapisu. Alternatywna opcja ios::app - dodawanie danych zamiast usuwania i zapisywania od nowa

    if(!plik.good()) cout << "Błąd";
    else{
        string dane;
        cin >> dane;
        plik << dane;   // wpisanie danych do pliku
    }
    plik.close();
}


void cwiczenie_konwesja_daty(){
    string nazwa_in = "MOCK_DATA.txt";
    fstream plik;
    plik.open(nazwa_in, ios::in);
    string tab[500];
    if(!plik.good()) cout<<"Blad";
    else{
        string dane, dane2;
        
        while (getline(plik, dane))
        {
            //cout<< dane.substr(3,2)<<endl;
            dane2 = dane.substr(6,9) + "-"+dane.substr(3,2) + "-"+dane.substr(1,0);;
            cout<<dane2<<endl;
        }
        
        plik.close();
    }

    
}

int main(){
    cwiczenie_konwesja_daty();
}