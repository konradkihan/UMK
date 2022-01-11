/*
Polecenie do zadania 2:
(10 pkt.) Napisać program, który dla podanego przez użytkownika ciągu znaków, wypisze
na ekran wszystkie występujące w nim palindromy o długości większej niż 2. Na przykład
dla ciągu BACABADACELE program powinien wypisać BACAB, ACA, ABA, ADA i ELE.

Konrad Kihan, 
2022 UMK Toruń 

*/

#include<iostream>
#include<string>
#include<algorithm>


using namespace std;


string input_collect(){
    cout << "Wprowadz ciag znakow dlugosci 3 lub wiecej \n Nie uzywaj spacji. \n >>> ";
    string input;
    getline(cin, input); // FIXME getline not working properly
    return input;
}


string input_check(string str){
    /* Funkcja sprawdzająca czy input wprowadzony
    przez użytkownika jest prawdiłowy.
    Input poprawny jeśli: ma długość więcej niż 2 
    Następnie funkcja waliduje napis i zamienia wszystkie
    wielkie litery na małe oraz usuwa spacje */
    if(str.length() <= 2) return false; // FIXME naprawić co zwraca funkcja
    else{
        remove(str.begin(), str.end(), ' '); // usuwanie spacji w napisie
        for(int i = 0; i < str.length(); i++){
            if(isupper(str[i])) str[i] = str[i] + 32; // zamiana wielkości liter
        }
    }
    return str;
}

void find_palindromes(string str){
    // TODO funkcja znajdująca palindromy
}

int main(){
    input_collect();

}