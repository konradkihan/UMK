#include<iostream>
using namespace std;


int division_by_sum(int n, int m){
    // n - licznik 
    // m - mianownik
    int sum = 0, i=0;
    for(i=0; sum<n; i++){
        sum += m;
    }
    return i;
}


int division_by_multiplying(int n, int m){
    // n - licznik 
    // m - mianownik
    int cont = 0, ctr = 0;
    for(int i=1; cont < n; i++){
        cont = i*m;
        ctr++;
    }
    return ctr;
}

int main(){
    cout << division_by_multiplying(20, 5) << endl;
    cout << division_by_multiplying(12, 3) << endl;
    cout << division_by_multiplying(12, 4) << endl;
}
