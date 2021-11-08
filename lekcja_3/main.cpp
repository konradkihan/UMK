#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void zad31(){
    // Użytkownik podaje 5 liczb całkowitych. Program zapisuje je w tablicy i wyświetla na
    // ekranie w odwrotnej kolejności.

    const int N = 5;
    int A[N];

    cout << "Insert five INTs: " << endl;
    int x;
    for(int i = 0; i < 5; i++){
        cin >> x;
        A[i] = x;
    }

    for(int i = 4; i >= 0; i--){
        cout << A[i] << " ";
    }

}


int zad32(){
    // Użytkownik podaje liczbę naturalną 1 <= n <= 10. Program prosi o podanie n liczb
    // rzeczywistych, zapisuje je w tablicy, a następnie oblicza i wyświetla sumę tych liczb.
    const int N = 10;
    int A[N];
    int sum = 0;

    cout << "Insert INT between 1 and 10: " << endl;
    int n;
    cin >> n;
    cout << "Now insert any INTs:";
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        A[i] = x;
    }
    for(int i = 0; i < n; i++){
        sum += A[i];
    }
    return sum;
}


int zad33(){
    // Program losuje 50 liczb całkowitych z przedziału [1, 1000] i zapisuje je w tablicy. Program
    // znajduje największą z tych liczb.
    const int N = 50;
    int A[N];
    
    srand(time(NULL));

    for(int i = 0; i < N; i++){
        A[i] = 1 + rand() % 100; // liczby losowe w przedziale od 1 do 100 
    }
    int max = 0;
    for(int i = 0; i < N; i++){
        if(max < A[i])
            max = A[i];
    }
    return max;
}


int zad34(){
    // Program losuje 100 liczb rzeczywistych z przedziału [0, 1] i zapisuje je w tablicy. Program
    // znajduje indeks najmniejszej z tych liczb.
    const int N = 100;
    double A[N];
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        A[i] = 1.0*rand() / RAND_MAX;
    }
    double mini = A[0];
    int index_mini;
    for(int i = 1; i < N; i++){
        if(mini > A[i]){
            mini = A[i];
            index_mini = i;
        }
    }
    return index_mini;

}


void zad38(){
    // Program symulujący grę w Lotto. Użytkownik wprowadza 6 różnych liczb naturalnych
    // z zakresu 1–49. Następnie program losuje 6 różnych liczb naturalnych (również z zakresu
    // 1–49). Program wyświetla na ekranie obie szóstki liczb, oraz liczbę trafień.
    srand(time(NULL));
    const int N = 6;
    int A[N];
    int results[N];

    int num_chk;    // helper - holds random value to check if it is inside the list

    int x;
    cout << "Insert 6 chosen numbers: " << endl;
    for(int i = 0; i < N; i++){
        cin >> x;
        A[i] = x;
    }
    for(int i = 0; i < N; i++){
        num_chk = rand() % 50 + 1;
        // if (find(
        //     begin(results), 
        //     end(results), 
        //     num_chk
        //     ) != num_chk){ // if no matches returns last element
            results[i] = num_chk;
        // }
    }

    // results show
    for(int i = 0; i < N; i++){
        cout << A[i] << "  " << results[i] << endl;
        // TODO pokaż liczbę trafień

    }


}


int main(){
    zad38();
}