#include<iostream>      // obowązkowa biblioteka IO
#include<ctime>         // biblioteka obsługi czasu
#include<cstdlib>       // generacja liczb lsoowych
#include<string>        // biblioteka operacji na napisach
#include<cmath>         // biblioteka operacji matematycznych
using namespace std;

/*
=============================================================== 
============================ ZAD 1 ============================
===============================================================
*/

void trapez(int n, int m){
    // Zadanie polega na narysowaniu trapezu o długości podstaw n i m
    // n - krótsza podstawa
    // m - dłuższa podstawa
	for(int i=0;i<m;i++)
	{
        if(i >= n){
            for(int k=m;k>i;k--){
                cout<<" ";
            }
        
            for(int j=0;j<i;j++){
                cout<<" *";
            }
            cout<<endl;
        }
		
	}
    /* Trapez to w zasadzie choinka bez czubka, wiec aby go wypisać najpierw piszemy
    algorytm na choinkę, a następnie - każemy mu niewypisywać wierszy, w których 
    wygeneruje mniej niż n gwiazdek */
}

/*
=============================================================== 
============================ ZAD 2 ============================
===============================================================
*/

bool duplikat(char tab[], char a){
    for(int i=0; i<100; i++){
        if(tab[i]==a) return true;
    }
    return false;
}


void znajdz_w_slowie(string x, string y){
    // Zadanie polega na szukaniu w napisie y liter ze słowa x a następnie wyliczeniu ich wystąpień
    char tab[100];
    for(int i = 0; i < x.size(); i++){
        int ctr = 0;
        for(int j = 0; j < y.size(); j++){
            if(x[i]==y[j]){
                ctr++;
            }
        }
        if(!duplikat){
            tab[i] = x[i];
            cout<<x[i]<<": "<<ctr<<endl;
        }
    }
    /* Wystarczy iterować po literach obydwu stringów i sprawdzać, czy dana litera z X występuje
    w stringu Y. Dodatkowo warto zaimplementować funkcję, która będzie odsiewać duplikaty. */

}

/*
=============================================================== 
============================ ZAD 3 ============================
===============================================================
*/

// Zadanie polega na zamienieniu przekątnych w tablicy 2d
void generowanie_tablicy(int tab[][100], int size){
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            tab[i][j] = 1 + rand()%9;
        }
    }
}

void zamiana_wierszy(int tab[][100], int size){
    int chk = 1;
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            if(i == j) swap(tab[i][j], tab[i][size-chk]);
        }
        chk++;
    }
    /* Aby zamienić przekątne musimy iterować po tablicy i jeśli trafimy na element
    przekątnej (sprawdza to warunek if) zamieniamy go z elementem w tym samym wierszu znajdującym
    się w chk odległości od krawędzi tablicy (w 1 wierszu będzie to 0, w drugim 1 itd...) */
}

void wypisywanie_tablicy(int tab[][100], int size){
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*
=============================================================== 
============================ ZAD 4 ============================
===============================================================
*/
// Zadanie polega na policzeniu odchylenia standardowego

double odch_std(int tab[], int n, double srednia){
    int s = 0;
    for(int i=1; i<n; i++){
        s = s + sqrt(
            pow(tab[i] - srednia, 2) / (n-1)
        );
    }
    return s;
}


int main(){

    /* ==== Wykonanie zadania 3 w main ==== */
    // const int N = 100;
    // int size;
    // int tab[N][N];
    // cout<<"Rozmiar macierzy: "; cin>>size;
    // size = size*size;
    // generowanie_tablicy(tab, size);
    // wypisywanie_tablicy(tab, size);
    // zamiana_wierszy(tab, size);
    // cout<<endl;
    // wypisywanie_tablicy(tab, size);

    /* ==== Wykonanie zadania 4 w main ==== */
    const int N = 100;
    int tab[N];
    int n;
    int suma;
    cout<<"Ile liczb chcesz przeliczyc? "; cin>>n;
    cout<<"Podaj te liczby: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>tab[i];
        suma += tab[i];
    }
    odch_std(tab, n, suma/n);

}