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
#include<algorithm> // obsługa funkcji remove()
#include<cctype>    // obsługa funkvji isalpha()


using namespace std;


string input_collect(){
    /* funcka pobiera od użytkownika napis */
    cout << "Wprowadz napis \n>>>";
    string input;
    getline(cin, input);
    return input;
}


string input_check(string str){
    /* Funkcja sprawdzająca czy input wprowadzony
    przez użytkownika jest prawdiłowy.
    Input poprawny jeśli: ma długość więcej niż 2 
    Następnie funkcja waliduje napis i zamienia wszystkie
    wielkie litery na małe oraz usuwa spacje */
    if(str == "q") return "EXITCODE_1"; // jeśli wprowadzono 'q' to zwrot wartości exitcode
    else if (str.length() < 3 ) return "";
    else{
        remove(str.begin(), str.end(), ' '); // usuwanie spacji w napisie
        for(int i = 0; i < str.length(); i++){
            if(!isalpha(str[i])) return ""; // sprawdzenie czy napis nie zawiera cyfr / znaków specjalnych
            if(isupper(str[i])) str[i] = str[i] + 32; // zamiana wielkości liter
        }
    }
    return str;
}


bool is_palindrome(string str){
    /* funkcja jako parametr przyjmuje napis jako parametr,
    a następnie sprawdza czy jest palindromem
    if palindrom -> true
    else -> false */
    for(int i = 0; i < str.length(); i++){
        if(str[i] != str[str.length()-i-1]) return false;
    }
    return true;
}


bool is_duplicate(string tab[], string str, int tablen){
    /* funkcja sprawdza czy napis jest duplikatem */
    for(int i = 0; i < tablen; i++)
        if(str == tab[i]) return true;
    return false;

}


void find_sub_palindromes(string str, string tab[]){
    /* funkcja jako parametr przyjmuje napis podany przez użytkownika,
    pustą tablicę typu string, następnie wyszukuje wszystkie substringi
    w tym napisie. Jeśli dany substring spełni warunki:
    bycia długości > 2, bycia palindromem, nie bycia wprowadzonym napisem */
    int k = 0;
    for (int i = 0; i < str.length(); i++){
        for(int j = 1; j <= str.length() - 1; j++){
            string sub_str = str.substr(i, j);
            if (
                sub_str.length() > 2 && 
                sub_str.length() != str.length() && 
                is_palindrome(sub_str) && 
                !is_duplicate(tab, sub_str, k+1) 
                ){

                tab[k] = sub_str;
                k++;
            }
        }
    }
}


void output(string tab[], int tablen){
    /* funkcja przyjmująca tablicę poprawnych substringów 
    i wypisuje je */
    cout << "Substringi bedace palindromami to:" << endl;
    for(int i=0; i < tablen; i++){
        if(tab[i].length() == 0) break;
        cout << tab[i] << "  |  ";
        if(i % 5 == 0 && i != 0) cout << endl;
    }
    cout << endl << "=======" << endl;
}


int main(){
    cout << "=====\nWprowadz ciag znakow dlugosci 3 lub wiecej \nNie uzywaj spacji. \nAby wyjsc wpisz 'q'\n=====" << endl;
    while(true){
        
    
        string collected_str = input_collect(); // pobranie napisu
        
        collected_str = input_check(collected_str); // walidacja napisu
        if (collected_str == ""){ // jesli napis jest nieprawidłowy
            cout << "Wprowadzono niepoprawny napis. Sprobuj ponownie." << endl; 
        }
        else if(collected_str == "EXITCODE_1") break;   // jeśli użytkownik chce opuścić program
        else{   // jeśli użytkownik wpisał poprawne dane
            const int TABLEN = 1000;
            string tab[TABLEN];
            cout << "Sprawdzasz napis: " << collected_str << endl;
            find_sub_palindromes(collected_str, tab);
            output(tab, TABLEN);
        }

    }
    cout<<"Zakonczono dzialanie programu ";
    return 0;
}