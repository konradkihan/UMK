#include<iostream>

using namespace std;

void zad101(int *x, int *y){
    if(*x > *y)
        swap(*x, *y);
}


int zad102(int *x, int *y){
    if(*x > *y) return *y;
    return *x;
}


int *zad103(int *x, int *y){
    if(*x > *y) return x;
    return y;
}


double zad104(double *a, int n){
    double suma = 0;
    for(double *wsk = a; wsk < a+n; wsk++)
        suma += *wsk;
    return suma;
}


int *zad105(int *a, int n){
    int *max = a;
    for(int *wsk = a; wsk < a+n; wsk++)
        if(*wsk > *max) *max = *wsk;
    return max;   
}


double *zad106(){
    double *x;
    return x;
}



int main(){
    
}