#include<iostream>
#include<cmath>
using namespace std;


struct trojkat{
    double a, b, c;
};


double cw71(trojkat abc){
    /* Zdefiniuj  strukturętrojkatprzechowującą  długości  boków  trójkąta.  
    Napisz  funkcję,która otrzymuje jako argument zmienną typutrojkat i zwraca 
    jako wartość obwód trójkąta przekazanego w argumencie. */
    return abc.a + abc.b + abc.c;
}


void cw72(trojkat tab1[], trojkat tab2[], int size){
    /* Napisz funkcję, która otrzymuje jako argumenty tablice tab1 i tab2 o 
    elementach typutrojkatoraz ich wspólny rozmiar i przepisuje zawartość 
    tablicy tab1 do tablicy tab2 */
    for(int i = 0; i < size; i++)
        tab2[i] = tab1[i];
}


struct student{
    string imie;
    string nazwisko;
    int numer_indeksu;
};


bool cw73(student a, student b){
    /* Zdefiniuj strukturęstudentzawierającą polaimię,
    nazwiskooraznumerindeksu. Na-pisz funkcję, która sprawdza czy dwie 
    zmienne zdefiniowanego typu zawierają te same war-tości. */
    if(
        a.imie == b.imie &&
        a.nazwisko == b.nazwisko &&
        a.numer_indeksu == b.numer_indeksu
    )return true;
    return false;
}


void cw74(student tab[], int size){
    /* Zdefiniuj strukturęstudentzawierającą polaimię,
    nazwiskooraznumerindeksu. Na-pisz funkcję, 
    która otrzymuje jako argumenty tablicę elementów typustudentoraz 
    jej roz-miar i sortuje ją alfabetycznie (względem pola nazwisko). */
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-1; j++){
            if(tab[j].nazwisko > tab[j+1].nazwisko){
                student tmp = tab[i];
                tab[j] = tab[j+1];
                tab[j+1] = tab[j];
            }
        }
    }
}


struct wektor{
    int x, y, z;
};


void cw75(wektor v1, wektor v2, int dzialania_wketory[]){
    /* Zdefiniuj strukturęwektorzawierającą polax,y,z. 
    Napisz funkcje pozwalające obliczaćsumy, iloczyny skalarne oraz 
    długości wektorów. */
    // suma wektorow
    int suma = v1.x + v2.x + v1.y + v2.y + v1.z + v2.z;
    // iloczyn skalarny
    int iloczyn = v1.x * v1.y + v1.y * v1.x + v1.z * v2.z;
    // dlugosc wektora
    // ???
    // wektor dlugosc = {}
        dzialania_wketory[0] = suma;
        dzialania_wketory[1] = iloczyn;
}


/* cw 7.6 
Zdefiniuj typ wyliczeniowy, służący do przechowywania informacji o 
stanie połączenia internetowego, o trzech wartościach odpowiadających 
trzem stanom: połączenie nawiązane,połączenie nienawiązane i połączenie w 
trakcie nawiązywania. Następnie zdefiniuj strukturę komputer przechowującą  
stan  połączenia,  IP  podłączonego  komputera  (jako  napis)  
oraznazwę jego właściciela. Napisz funkcję, która jako argument otrzymuje 
strukturę komputer i wyświetla na standardowym wyjściu jej zawartość w 
sposób przyjazny dla użytkownika. */


struct stan_pol{
    int stan;
};


struct komputer{
    stan_pol stan_polaczenia;
    string adres_ip;
    string username;
};


void cw76(komputer komp){
    cout
        <<"Komputer o adresie "<<komp.adres_ip
        <<" użytkowany przez "<<komp.username<<endl
        <<"Stan połączenia z siecią: "<<komp.stan_polaczenia.stan;
}



int main(){
    int dzialania_wketory[2];
    wektor w0 = {1, 2, 3};
    wektor w2 = {3, 4, 5};
    cw75(w0, w2, dzialania_wketory);
    for(int i =0; i < 2; i++){
        cout<<dzialania_wketory[i];
    }
}