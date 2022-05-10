// Zad. 1. Który program jest napisany najpoprawniej?

// (a)

#include <stdio.h>
#include <math.h>   // nie posiada biblioteki rand

int main()
{
    printf("Hello, World!\n");

    return rand();
}

//(b)

#include <stdlib.h>
#include <math.h>   // nie posiada biblioteki IO

int main()
{
    printf("Hello, World!\n");

    return rand();
}

// (c)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello, World!\n");

    return rand();
}
            /* C jest najpoprawniej ponieważ zawiera potrzebne biblioteki */

// (d)

#include <stdio.h>      // nie posiada biblioteki rand

int main()
{
    printf("Hello, World!\n");

    return rand();
}

// Zad. 2. Dana jest deklaracja funkcji:

unsigned int binomial(unsigned int n,unsigned int k);

// Funkcja ta ma obliczać wartość dwumianu Newtona "n nad k". Wskaż jej poprawną implementację.

// (a)

unsigned int binomial(unsigned int n, unsigned int k){
unsigned int b;

if(n * k = 0) b = 1; else b = binomial(n-1,k) + binomial(n-1,k-1);

return b;
}

// (b)

unsigned int binomial(unsigned int n, unsigned int k){
static unsigned int b;

if(n * k = 0) b = 1; else b = binomial(n-1,k) + binomial(n-1,k-1);

return b;
}

// (c)

unsigned int binomial(unsigned int n, unsigned int k){
static int b;

if(n * k = 0) b = 1; else b = binomial(n-1,k) + binomial(n-1,k-1);

return b;
}

// (d)

unsigned int binomial(unsigned int n, unsigned int k){
int b;

if(n * k = 0) b = 1; else b = binomial(n-1,k) + binomial(n-1,k-1);

return b;
}                   /* C i D odpadają bo przyjmują wartości ujemne, B odpada bo static zoachowuje swoją wartość pomiędzy wywołaniami funkcji więc POPRAWNA A */

// Zad. 3. Chcemy przy użyciu pętli "for" zsumować liczby od 1 do n. Wskaż poprawne wywołanie tej pętli.

// (a)

int i,s;

for(i = 1; i <= n; ++i) s += i;     // s nie została wyzeorwana

// (b)

int i,s = 0;

for(i = 0; i < n; i++) s += i;      // sumowanie od 0 do n a nie 1 do n

// (c)

int i,s;

s = 0;
for(i = 0; i < n; i++) s += i + 1;      // sumowanie chuj wie czego

// (d)

int i,s;

s = 0;
for(i = 1; i <= n; ++i) s += i;         // POPRAWNA  ODPOWIEDŹ

//Zad. 4. Funkcja

int nextprimesum(int n);

// ma dodawać do liczby n kolejne liczby, aż natrafi na liczbę pierwszą, wówczas dotychczas uzyskana suma zwracana jest jako wynik. Podaj poprawną implementację funkcji nextprimesum.

// Uwaga: użyta jest zdefiniowana przez użytkownika funkcja

bool isprime(int n);

// sprawdzająca czy liczba n jest pierwsza.

// (a)

int nextprimesum(int n){
    int s = n, i = n + 1;
    for(;;i++){
        s += i;
        if(isprime(n)) break;
    }
    return s;
}

//(b)

int nextprimesum(int n){
    int s = 0, i = n;
    for(;;i++){
        if(isprime(n)) break;
        s += i;
    }
    return s;
}

//(c)

int nextprimesum(int n){
    int s = n, i = n + 1;
    for(;;i++){
        if(isprime(n)) break;
        s += i;     // POPRAWNA BO NAJPIERW SPRAWDZENIE PODZIELNOŚCI WYZNACZAJĄCE STOP A  DOPIERO POTEM LICZENIE EWNETUALNE JAKO "ELSE"
    }
    return s;
}

//(d)

int nextprimesum(int n){
    int s = 0, i = n;
    for(;;i++){
        s += i;
        if(isprime(n + 1)) break;
    }
    return s;
}

//Zad. 5. Napisz przykład wywołania funkcji printf wyświetlającej wartość zmiennej x typu double z precyzją do 2 miejsc po przecinku.

//Zad. 6. Czy poniższy program

int main(){;}

//jest poprawnie napisany? Opisz krok po kroku co będzie się działo podczas wykonania tego programu.