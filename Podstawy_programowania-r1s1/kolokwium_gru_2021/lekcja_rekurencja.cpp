#include <iostream>
using namespace std;


unsigned long long cw51a(int n){
    // Obliczanie silni
    if (n==0) return 1;
    return n * cw51a(n-1);
}


unsigned long long cw51b(int n, int k){
    // Obliczanie symbolu newtona
    if (k == 0 || k == n) return 1;
    return cw51b(n-1, k-1) + cw51b(n-1, k);
}


unsigned long long cw51c(int n){
    // Obliczanie n-tego wyrazu ciągu Fibonacciego
    if(n == 1 || n == 2) return 1;
    return cw51c(n-2) + cw51c(n-1);
}


unsigned long long cw51e(int n, int m){
    // potęgowanie liczb naturalnych
    // pow(n, m)
    if(m == 0) return 1;
    return n * cw51e(n, m-1);
}

int main(){

}