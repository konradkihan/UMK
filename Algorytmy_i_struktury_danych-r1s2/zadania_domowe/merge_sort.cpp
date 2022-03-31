/* Zaimplementuj (w języku C++, C lub Python) funkcję merge_sort będącą realizacją algorytmu sortowania przez scalanie (patrz pseudokod z zadania 2).
W funkcji głównej programu pobierz ze standardowego wejścia liczbę elementów tablicy oraz całkowite liczby (kolejne elementy w nowej linii) będące elementami tablicy do posortowania.
Następnie wyświetl na standardowe wyjście wynik wywołania dla tych liczb zaimplementowanej wcześniej funkcji merge_sort. Wyświetlane liczby oddziel znakiem nowej linii.
W trakcie testowania programu pamiętaj, że system sprawdzający jest bezwzględny jak każda maszyna. 
Dlatego zwróć uwagę na format zapisu danych wejściowych oraz format wyświetlania wyniku, a także na białe znaki! */
#include<iostream>
using namespace std;


void scal(int L1[], int L2[], int L3[], int n1, int n2){
    int i1 = 0, i2 = 0, i3 = 0;

    while(i1 < n1 && i2 < n2){
        if(L1[i1] < L2[i2]){
            L3[i3] = L1[i1];
            i1++;
        }
        else{
            L3[i3] = L2[i2];
            i2++;
        }
        i3++;
    }

    while(i1 < n1){
        L3[i3] = L1[i1];
        i1++; i3++;
    }

    while(i2 < n2){
        L3[i3] = L2[i2];
        i2++; i3++;
    }
}

void mergeSort(int A[], int n){
    if(n>1){
        int m = n / 2, j = 0;
        int A1[m], A2[n-m];

        // rodzielanie tablic na lewą i prawą 
        for(int i = 0; i<m; i++)
            A1[i] = A[i];
        
        for(int i = m; i<n; i++){
            A2[j] = A[i];
            j++;
        }

        // dzielenie rekursywne

        // lewa tablica
        mergeSort(A1, m);
        // prawa tablica 
        mergeSort(A2, n-m);

        // Scalanie podzielonych tablic
        scal(A1, A2, A, m, n-m);
    }
}

int main(){
    // wczytanie danych
    int size;
    cin>>size;
    int tab[size];
    for(int i = 0; i < size; i++)
        cin>>tab[i];
    // wykonanie programu
    mergeSort(tab, size);
    // wypisanie wyników
    for(int i = 0; i < size; i++)
        cout<<tab[i]<<endl;
}