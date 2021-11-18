#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX = 50;

long long zad41(int a){
    // Napisz program obliczający silnię liczby podanej przez użytkownika. Silnia musi być
    // obliczana przez funkcję.
    long long s = 1;
    for(int i = 1; i <= a; i++)
        s = s*i;
    return s;
}

long long zad42(int n, int k){
    // Napisz program zawierający funkcję obliczającą symbol Newtona liczb podanych
    // przez użytkownika. Program powinien wykorzystywać funkcję z poprzedniego zadania.
    // funkcja zad41() oblicza wartość silni    
    return zad41(n) / (zad41(k)*zad41(n-k));
}

long long zad43(int m, int n){
    // Napisz funkcję, która dla dwóch liczb naturalnych m, n oblicza wartość wyrażenia m^n.
    // Można założyć, że przynajmniej jedna z liczb jest różna od zera
    long long pow_m = m*m;
    for(int i=1; i < n-1; i++)
        pow_m = pow_m*m;
    return pow_m;
}  

int zad45(int tab[][MAX], int rozmiar){
    // Napisz funkcję, która dostaje jako argumenty dwuwymiarową tablicę o elementach typu
    // int oraz jej wymiary, i zwraca jako wartość 
    // indeks wiersza o największej średniej wartości elementów.
    int id_sr=0, suma = 0, max_suma = 0;
    for(int i = 0; i < rozmiar; i++){
        suma += tab[0][j];
    }
    for(int i = 1; i < rozmiar; i++){
        
        for(int j = 0; j < rozmiar; j++){
            suma += tab[i][j];
        }
        if(suma > max_suma){
            id_sr = i;
        }
    }
    return id_sr;
}

int zad46(
    int mac_A[][MAX], 
    int mac_B[][MAX], 
    int n, 
    int m, 
    int k
    ){
        // Napisz funkcję, która otrzymuje w argumentach dwie prostokątne dwuwymiarowe tablice
        // elementów typu int o wymiarach odpowiednio n × m i m × k oraz ich wymiary, i oblicza
        // iloczyn tych macierzy.
    }

void generator_2d(int tab[][MAX], int rozmiar){
    srand(time(NULL));
    for(int i; i < rozmiar; i++)
    {
        for(int j; j < rozmiar; i++){
            tab[i][j] = 1 + rand() % 100;
        }
    }
}





int main(){
    const int N = 5;
    const int M = 5;
    const int K = 5;
}