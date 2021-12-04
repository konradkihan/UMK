#include<iostream>

using namespace std;

void zad61(string s){
    /*Napisz funkcję, która przyjmuje jako argument string 
    i wyświetla na ekranie kolejnowszystkie jego znaki.
    Każdy znak powinien być ujęty w nawiasy kwadratowe. 
    Na przykładdla argumentuJanfunkcja wyświetla[J][a][n]*/
    for(int i=0; i < s.size(); i++)
        cout << "[" << s[i] << "]";
}


string zad62(string file_name){
    /* Napisz funkcję, która z nazwy pliku 
    (przesłanej jako argument typu string) usunie
    z niejewentualne rozszerzenie i zwróci nazwę 
    jako obiekt typu string. 
    Na przykład dla argumentudokument1956.docfunkcja 
    powinna zwrócićdokument1956. Uwaga rozszerzenie 
    pliku możemieć dowolną długość*/
    string new_name;
    int dot_index;
    for(int i = file_name.size(); i > 0; i--){
        if(file_name[i] == '.'){
            dot_index = i+1;
            break;
        }
    }
    for(int i = 0; i < dot_index; i++){
        new_name += file_name[i];
    }
    return new_name;
}



int zad63(string s, char x){
    /*Napisz funkcję, która przyjmuje jako argumenty 
    string oraz pojedynczy znak 
    i zwracaliczbę wystąpień znaku w stringu. */
    int ctr = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == x)
            ctr++;
    return ctr;
}


int zad64(string s){
    /* Napisz funkcję, która przyjmuje jako 
    argument string i sprawdza czy jest on palindromem. 
    W zależności od tego zwraca 0 lub 1. */
    for(int i = 0; i <= s.size(); i++){
        if(s[i] != s[s.size()-1-i])
            return 0;
    }
    return 1;
}


void zad65(string tab[], int size){
    /* Napisz funkcję sortującą tablice stringów. */
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size-1; j++)
            if(tab[j] > tab[j+1])
                swap(tab[j], tab[j+1]);
    cout << tab;
}


bool zad66(string s, string ps){
    /*  TESTME
    Napisz funkcję, która przyjmuje jako argumenty 
    dwa stringi i sprawdza czy drugi string występuje
    w pierwszym jako podciąg. */

    for(int i = 0; i < s.size() - ps.size(); i++){
        for(int j = 0; j < ps.size(); j++){
            if(ps[i+j] != s[j]){
                break;
            }
            if(j == s.size())
                return true;
        }
    }
    return false;
}


string sortuj_str(string s){
    /* Sortowanie stringów */
    for(int i = 0; i < s.size(); i++)
        for(int j = 0; j < s.size()-1; j++)
            if(s[j] > s[j+1])
                swap(s[j], s[j+1]);
    return s;
}


int zad67(string s, string an_s){
    /* Napisz funkcję, która przyjmuje jako argumenty 
    dwa stringi i sprawdza czy są one anagramami.
    W zależności od tego zwraca 0 lub 1. */
    if(s.size() != an_s.size())
        return 0;

    if(sortuj_str(s) != sortuj_str(an_s))
        return 0;
    
    return 1;
}


int main(){
    cout << zad67("aab", "bab");
}
