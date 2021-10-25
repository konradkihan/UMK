#include <iostream>
#include <cmath>
#include <string>

using namespace std;

unsigned long long cw21a(int n){
    // Obliczanie silni
    if (n==0)
        return 1;
    n = n * cw21a(n-1);
}


double cw21b(int n){
    // Użytkownik podaje liczbę naturalną n, a następnie n liczb rzeczywistych a1, a2, . . . , an.
    // Program oblicza średnią arytmetyczną tych liczb rzeczywistych.
    double suma = 0;
    double x;
    for(int i=0; i<=n; i++){
        cin >> x;
        suma += x;
    }
    return suma/n;
}


double cw21b2(){
    // Wariacja funckji cw21b() która nie wymaga znajomości
    // ilości wprowadzanych danych
    int ctr = 0;
    double suma, liczba;
    char c;
    do{
        suma = 0.0;
        ctr = 0;
        cin >> liczba;
        if(liczba < 1)
            return suma / ctr;
        suma = suma + liczba;
        ctr++;
    }while(true);
}


void rownanie_kw(double a, double b, double c){
    // Program otrzymije 3 liczby i oblicza wartości liczb zerowych.
    int delta = sqrt(pow(b,2)-(4*a*c));
    if (delta >0){
        double x1 = (-b + delta)/2*a, x2 = (-b - delta)/2*a;
        cout<<"x1="  << x1 << " x2=" << x2;
    }
    else if (delta == 0){
        cout << "x = " << (-b)/2*a;
    }
    else {
        cout << "brak miejsc zerowych";
    }
}


void cw21c(int n, int m){
    // Użytkownik podaje liczby naturalne m, n.
    // Program rysuje za pomocą symbolu * prostokąt o bokach długości m, n.
    for(int i =0 ; i<=n; i++){
        for(int j= 0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}


void cw21d(int n){
    // Użytkownik podaje liczbę naturalną n.
    // Program rysuje za pomocą symbolu * trójkąt prostokątny o przyprostokątnej długości n. 
    for(int i=0 ; i<=n; i++){
        cout << string(i, '*') << endl;
    }
}


void cw21e(int n){
    // Użytkownik podaje liczbę naturalną n.
    // Program rysuje za pomocą symbolu * trójkąt prostokątny o przyprostokątnej długości n.
    for(int i=0; i<=n; i++){
        cout << string(n-i, ' ') << string(i, '*') << endl;
    }
}


void cw21f(int n){
    //Użytkownik podaje liczbę naturalną n. 
    //Program wyświetla tabliczkę mnożenia liczb od1 do n
    // FIXME tabliczka mnożenia ma być w formie kwadratu z wierszami i kolumnami
    for(int i = 0; i<=n; i++){
        cout << i << "\t*\t" << n << "\t=\t" << i*n << endl;
    }
}


double cw21g(int n){
    // Użytkownik podaje liczbę naturalną n. 
    // Program oblicza wartość sumy
    double suma = 0;
    for(int i=1; i<=n; i++){
        suma = suma + pow((i+3), 3) - 8; 
    }
    return suma/n;
}


bool cw21h(int n){
    // TODO Sprawdzanie czy liczba naturalna jest liczbą pierwszą.
    // zwraca true jeśli jest liczbą pierwszą 
    // zwraca flse jeśli nie jest liczbą pierwszą
}


bool cw21i(int n){
    // Sprawdzenie czy liczba naturalna jest liczbą doskonałą.
    int suma = 0;
    for(int i = 1; i<=n-1; i++){
        if(n%i == 0)
            suma = suma + i;
    }
    if (suma == n)
        return true;
    else
        return false;
}


int cw21j(int n){
    // TODO Obliczanie sumy cyfr podanej liczby.
}


int cw21k(int n){
    // TODO Sprawdzenie czy dana liczba jest palindromem
    
}


int cw21l(int n){
    // TODO Zmiana liczby z postaci dwójkowej na dziesiętną
}


string cw21m(int n){
    // Zmiana liczby z postaci dziesiętnej na dwójkową
    string bin = "";
    while(n != 0){
        if (n % 2 == 0)
            bin = "0" + bin;
        else
            bin = "1" + bin;
        n = (n%2)/2;
    }
    return bin;
    // FIXME does not work, returns 0 constantly
}


int cw21n(int n, int base_n, int base_m){
    // TODO Zmiana liczby z systemu o podstawie n na system o podstawie m
}

int main(){
    cout << cw21m(168);
    return 0;
}
