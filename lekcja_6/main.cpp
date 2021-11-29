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
    /* TODO Napisz funkcję, która przyjmuje jako 
    argument string i sprawdza czy jest on palindro-mem. 
    W zależności od tego zwraca 0 lub 1.*/
}


void zad65(string tab[]){
    /* TODO Napisz funkcję sortującą tablice stringów. */
}


bool zad66(string s, string ps){
    /* TODO Napisz funkcję, która przyjmuje jako argumenty 
    dwa stringi i sprawdza czy drugi stringwystępuje
    w pierwszym jako podciąg. */
}

int zad67(string s, string an_s){
    /* TODO Napisz funkcję, która przyjmuje jako argumenty 
    dwa stringi i sprawdza czy są oneanagramami.
    W zależności od tego zwraca 0 lub 1. */
}

int main(){}
