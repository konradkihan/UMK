#include<iostream>

using namespace std;

/*
&    operator pobierania adresu --> &x to ADRES x

int *y;   <-- wskaźnik
y = &y;

-----------
int x = 5;
int *y;
y = &x;

*y = 7  <-- * jako operator wyłuskania dzięki niemu teraz wartość x wynosi 7

*/

void foo(int x){
    x++;
}

void boo(int &x){
    x++;
}

void moo(int *x){
    (*x)++;     // jako, że * to również operator mnożenia to należy zapisać (*x) aby uniknąć problemów z kolejnością działań
}



/* praca z tablicami
int A[10];
adres A[0] to x
adres A[i] to x + 4*i  // 4 to rozmiar int

więc można:

for(int i=0; i<=10; i++){
    A[i]=0   <-- to ma postać adres(A[0]+4*i)
}

lub

for(int *wsk=&A; wsk<A+10; wsk++)  <-- przesuwa o 4B w prawo
    wsk = 0

!!NAZWA TABLICY JEST ADRESEM JEJ PIERWSZEGO ELEMENTU!!


talbica wywołanie:
funkcja1(int A[], int rozmiar)   ==  funkcja2(int *A, int rozmiar)

funckja1(A, 10)
funkcja2(A,10)

*/





int main(){
    // int a = 5;
    // foo(a);
    // cout << a << endl;

    // boo(a);
    // cout << a << endl;

    // moo(&a);
    // cout << a << endl;
}


