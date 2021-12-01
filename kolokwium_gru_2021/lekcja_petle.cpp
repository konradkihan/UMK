#include<iostream>
#include<cstdlib>
using namespace std;


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


int cw21k(int n){
    // odwracanie liczby całkowitej
    int odwr_n = 0;
    while(n > 0){
        int r = n % 10;
        odwr_n = odwr_n * 10 + r;
        n = n/10;
    }
    return odwr_n;
}

int main(){
    
}