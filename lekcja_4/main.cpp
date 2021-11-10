#include <iostream>
using namespace std;


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

int main(){}