#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void tablice(){
    const int N = 10;
    int A[N];

    for(int i = 0; i < N; i++)
        A[i] = 2 * i;

    for(int i = 0; i < N; i++)
        cout<<A[i]<<" ";
}

/* algorytm sortowania bombelkowego
polega on na przenoszeniu największych elementów na koniec tablicy,
najprostszy ale najbardziej wydajny */
void sortowanie_bombelkowe(){

}

/* algorytm sortowania przez selekcję 
Przebieg działania w tablicy n elementowej:
START
    wybieranie najmniejszego elementu w zakresie [0; n] i przeniesienie go na 0 pozycję,
    wybieranie najmniejszego elementu w zakresie [1; n] i przeniesienie go na 1 pozycję, 
    ...
    wybieranie najmniejszego elementu w zakresie [n-2; n] i przeniesienie go na n-2 pozycję 
    wybieranie najmniejszego elementu w zakresie [n-1; n] i przeniesienie go na n-1 pozycję
STOP
Algorytm wykonuje sie n-1 razy dla tablicy n elementowej. Nie należy do szybkich algorytmów,
ale jest prosty w implementacji*/
void sortowanie_selekcja(){

    #pragma region  generowanie tablicy z losowymi liczbami [0; 1]
        const int N = 100000;
        double tab[N];
        srand(time(NULL));

        for(int i = 0; i < N; i++)
            tab[i] = 1.0 * rand() / RAND_MAX;
        
        cout << "Tablica nieposortowana wygenerowana." << endl;
        // for(int i = 0; i < N; i++)
        //     cout << tab[i] << "  ";

    #pragma endregion
    
    #pragma algorytm sortowania
        for(int i = 0; i <= N-1; i++){
            double minimum;
            int min_index = i; // zmienna pomocnicza przechowująca indeks najmniejszego elementu w zakresie w tablicy
            minimum = tab[i];
            for(int j = i+1; j < N; j++){
                if(tab[j] < minimum){
                    minimum = tab[j];
                    min_index = j;
                }
            }
            swap(tab[i], tab[min_index]);
        }
    cout << "Tablica posortowana." << endl;
}


int main(){
    sortowanie_selekcja();
}



