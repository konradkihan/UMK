#include <iostream>
#include <cmath>

using namespace std;

unsigned long long cw21a(int n){
    if (n==0)
        return 1;
    n = n * cw21a(n-1);
}

double cw21b(int n){
    double suma = 0;
    double x;
    for(int i=0; i<=n; i++){
        cin >> x;
        suma += x;
    }
    return suma/n;
}

void rownanie_kw(double a, double b, double c){
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

void cw21c(int m, int n){
    for(int i; i<=n; i++){
        for(int j; j<=m; j++){
            cout << "****";
        }
        cout << endl;
    }
}

int main(){
    cout << cw21a(15);
    return 0;
}