#include<stdio.h>
int main(){

    int c;
    while ((c = getchar()) != EOF)    // getchar - pobierz znak
        printf("%d\n", c);  // formatowanie %d zostanie zamienione przez zmienną c
    printf("%d - to koniec pliku\n", c);
    

    return 0;
}