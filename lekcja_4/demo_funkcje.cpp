#include <iostream>
using namespace std;

void zamien(int &x, int &y){
    // funkcja zamienia liczby x oraz y
    // & oznacza, że funkcja zamiast danych dostaje referencje do danych przez co zmienia się scope.
    cout<<x<<" "<<y<<endl;
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    cout<<x<<" "<<y<<endl;
}

int suma_tab(int tab[], int rozmiar){
    // funkcja zwraca sumę elementów w tablicy
    int sum = 0;
    for(int i = 0; i < rozmiar; i++)
        sum += tab[i];
    return sum;
}



int main(){}