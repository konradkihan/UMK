#include<iostream>
#include<cstdlib>
using namespace std;


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

}