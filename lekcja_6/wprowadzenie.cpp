# include <iostream>
/* Stingi  wprowadzane są przez nowy plik nagłówkowy */
# include <string>
using namespace std;

int main(){
    /* Dostanie sie do konkretnego elementu napisu wygląda podobnie jak w napisach */
    string napis, napis2, napis3;
    napis = "Ala ma kota";
    napis2 = "i pasa";
    cout<<napis[3];
    /* najważniejsze metody pracy na napisach */
    napis.size();
    napis.length();
    napis3 = napis + napis2;
}