#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void tab_gen(int tab[], int size){
    srand(time(nullptr));
    for(int i = 0 ; i<size; i++)
        tab[i] = rand() % 10000;
    for(int i = 0; i < size; i++)
        cout<<tab[i]<<" ";
    cout<<endl;
}


void tab_sort(int tab[], int size){
    for(int i = 0; i < size-1; i++)
        for(int j = 0; j < size-1; j++)
            if(tab[j] > tab[j+1])
                swap(tab[j], tab[j+1]);

    for(int i = 0; i < size; i++)
        cout<<tab[i]<<" ";
    cout<<endl;

}

int bin_search(int tab[], int start, int end, int to_find){
    int middle;
    if(start > end)
        return -1;
    middle = (start + end) /2;
    if(tab[middle] == to_find) 
        return middle;
    else if(to_find < tab[middle])
        return bin_search(tab, start, middle-1, to_find);
    else
        return bin_search(tab, middle+1, end, to_find);
}

int main(){
/* ZAD 5.1i
problem wyszukiwania binarnego - sprawdzenie czy w posortowanym zbiorze X znajduje się dowolny element n. 
W przeciwieństwie do wyszukiwania liniowego nie sprawdza on po kolei elementów listy.
Polega ono na wyszukiwaniu środkowego elemenu listy, sprawdzanie czy szukany jest większy czy mniejszy
a następnie powtarzanie procesu na odpowiedniej połowie tabeli. Złożoność algorytmu jest logarytmiczną.
*/

    int const N = 50;
    int tab[N];

    tab_gen(tab, N);
    tab_sort(tab, N);

    int to_find = tab[8];
    cout << bin_search(tab, 0, N-1, to_find);
}