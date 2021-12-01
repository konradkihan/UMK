#include<iostream>
#include<cstdlib>
using namespace std;


void sortowanie_babelkowe(int tab[], int size){
    /* algorytm sortowania bąblkowego porównuje każdy element j tablicy porównuje z każdym innym elementem i jeśli dojdzie do sytuacji,
    w której element j jest większy od j+1 zostają one zamienione na zasadzie "wiekszy bąbelek wypływa na powierzchnię" */
    for(int i = 0; i < size-1; i++)
        for(int j = 0; j < size-1; j++)
            if(tab[j] > tab[j+1])
                swap(tab[j], tab[j+1]);

    for(int i = 0; i < size; i++)
        cout<<tab[i]<<" ";
    cout<<endl;

}


void sortowanie_selekcja(){
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
    
}