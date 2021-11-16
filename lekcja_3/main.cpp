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
    
    srand(time(NULL)); // ustawienia generatora liczb losowych

    const int N = 6;    // rozmiar user_choices[] oraz results[]
    int user_choices[N]; // tablica przechowująca input gracza
    int results[N]; // tablica przechowująca wyniki wylosowane

    int num_chk;    // zmienna pomocnicza, przechowuje tymczasowo wartość, która ma zostać wpisana do tablicy
    bool is_in_array; // zmienna pomocnicza, określa czy liczba już znajduje się w tablicy results[]
    int user_input;


    cout << "Wpisz 6 różnych liczb: " << endl;
    /* pętla prosi użytkownika o wprowadzenie 6 liczb, co liczbę generuje nową losową tak długo aż nie będzie się ona powtarzać
    sprawdzenie polega na ustawieniu flagi is_in_array na wartość true jeśli znajduje się w tablicy, powoduje to kolejny obieg pętli,
    jeśli powtórzenia nie ma pędla do-while wykona się tylko raz */
    for(int i = 0; i < N; i++){
        cin >> user_input;
        user_choices[i] = user_input;
        do{
            num_chk = rand() % 50 + 1;
            // sprawdzenie czy liczba znajduje się już w tablicy
            is_in_array = false;
            for(int j; j < N; j++){
                if(results[j] == num_chk)
                    is_in_array = true;
            }
        }while(is_in_array);
        results[i] = num_chk;
    }


    // wypisanie wyników
    int ctr = 0; // licznik trafień
    for(int i = 0; i < N; i++){
        
        if(results[i] == user_choices[i])
            ctr++;
        cout << user_choices[i] << "  " << results[i] << endl;
    }
    cout << "Trafiono: " << ctr << "razy.";


}


int main(){
    zad38();
}