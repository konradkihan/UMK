/* sito erastotenesa
metoda znajdowania liczb pierwszych polegająca na wykreślaniu z tablicy liczb podzielnych przez i
*/
#include <iostream>
#include <cmath>
using namespace std;

void czy_pierwsza(int n){
    const int N = 10000;
    bool czy_pierwsza[N];

    
    for(int i = 2; i <= n; i++)
        czy_pierwsza[i] = true;

    for(int i = 2; i <= sqrt(n); i++){
        if(czy_pierwsza[i] == true){
            for(int j = 2*i; j <= n; j = j+i)
                czy_pierwsza[j] = false;
        }
    }

    for(int i = 2; i<=n; i++)
        if(czy_pierwsza[i] == true)
            cout << czy_pierwsza[i] << " ";
    
}

int main(){
    czy_pierwsza(1000);
}