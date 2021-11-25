#include <iostream>
using namespace std;
/* Napisać programy rozwiązujące w sposób rekurencyjny następujące problemy */
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

unsigned long long cw51d(int n, int b){
    // Algorytm euklidesa
    if(b == 0) return n;
    return cw51d(b, n % b);
}

unsigned long long cw51e(int n, int m){
    // potęgowanie liczb naturalnych
    // pow(n, m)
    if(m == 0) return 1;
    return n * cw51e(n, m-1);
}

unsigned long long cw51f(int n){
    // Obliczanie sum postaci 
    // Sn = 1/2 + 2/3 + 3/4 + ... + n/(n+1)
    if(n == 1) return 0.5;
    return cw51f(n-1) + n/(n+1);
}

unsigned long long cw51g(int n){
    // Wyznaczanie liczby cyfr w podanej liczbie naturalnej
    if (n < 10) return 1;
    return cw51g(n / 10) + 1;
}

unsigned long long cw51h(int a,char from,char aux,char to){
    if(a==1){
       cout<<"\t\tMove disc 1 from "<<from<<" to "<<to<<"\n";
       return;
    }
    else{
       cw51h(a-1,from,to,aux);
       cout<<"\t\tMove disc "<<a<<" from "<<from<<" to "<<to<<"\n";
       cw51h(a-1,aux,from,to);
    }
}

void cw51h_print(){
    int n;
    cout<<"\n\t\t*****Tower of Hanoi*****\n";
    cout<<"\t\tEnter number of discs : ";
    cin>>n;
    cout<<"\n\n";
    cw51h(n,'A','B','C');
}

unsigned long long cw51i(){
    // TODO Wyszukiwanie binarne. Dane są uporządkowana lista i pojedynczy element.
    // Należy sprawdzić czy element występuje na liście i zwrócić jego indeks.
    // Jeżeli nie występuje zwracamy −1.
    // PATRZEĆ PLIK - wyszukiwanie_binarne.cpp
}
unsigned long long cw51j(int n){
    // Ile kawałków pizzy można uzyskać za pomocą n prostoliniowych cięć nożem? 
    // (Bardziej „matematycznie” — jaka jest największa liczba Ln obszarów wyznaczonych przez n
    // prostych na płaszczyźnie?)
    if(n == 1) return 2;
    return n + cw51j(n-1);
}
unsigned long long cw51k(){
    // TODO Obliczanie wyznacznika macierzy (korzystając z rozwinięcia Laplace'a)
}
unsigned long long cw51l(int n){
    // TODO generowanie wszystkiech permutacji zbioru n-elementowego
}

int main(){
    cout<<cw51g(43243);
}