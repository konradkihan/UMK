#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void funkcja(string nazwa){

    fstream plik;
    plik.open(nazwa, ios::in);
    char znak;
    int ctr = 0;
    int x;
    while(plik >> x >> znak){
        int tmp = x;
        for (int i=1; i<=x; i++){
        for(int j=1; j<=tmp; j++){
            cout << znak; // wypisanie 
            ctr++;
        }
        cout << endl;
        tmp--;
        }
    }
    cout<<"Liczba znakoww: "<<ctr;
    
}


int main(){
    string npliku;
    cout<<"Podaj nazwe pliku"<<endl;
    cin >> npliku;
    funkcja(npliku);

}