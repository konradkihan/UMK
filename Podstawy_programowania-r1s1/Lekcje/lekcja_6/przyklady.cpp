#include<iostream>
#include<string>

using namespace std;

int main(){
    // przykład 1 operacje na indeksach
    string x; 
    x = "Ala ma kota";
    cout << x << endl;
    x[0] = 'a';
    cout << x << endl;
    
    // przykład 2 konkatenacja
    string y = " i psa";
    x += y;
    cout << x;
    
    // przykład 3 wprowadzanie
    string z;
    //cin >> z; // pobierze tylko do pierwszej spacji
    //getline(cin, y); // pobierze całą linijkę
    
    // przykład 4 długość
    cout << y.length() << endl;
    
    // przykład 5 iteracja
    string a;
    for(int i=0; i<11; i++){
        z += "69_";
        cout<<z<<"  "<<z.capacity()<<endl;
    }
}   