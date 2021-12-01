#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX = 50;

void zad46(
    int mac_A[][MAX], 
    int mac_B[][MAX], 
    int wynik_C[][MAX],
    int n,
    int m,
    int p
    ){
        // Napisz funkcję, która otrzymuje w argumentach dwie prostokątne dwuwymiarowe tablice
        // elementów typu int o wymiarach odpowiednio n × m i m × k oraz ich wymiary, i oblicza
        // iloczyn tych macierzy.
        for(int i = 0; i < m; i++){
            for(int j = 0; j < p; j++){
                wynik_C[i][j] = 0;
                for(int k = 0; k < n; k++)
                    wynik_C[i][j] += mac_A[i][k]*mac_B[k][j];
            }
        }
    }


int main(){
    // GENEROWANIE LOSOWYCH MACIERZY
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m=4, n=5, p=6;
    srand(time(nullptr));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            A[i][j] = rand() % 10;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < p; j++)
            B[i][j] = rand() % 10;
}