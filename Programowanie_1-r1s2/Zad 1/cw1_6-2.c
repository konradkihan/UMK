#include<stdio.h>
int main(){

    int c;
    scanf("%c", c);
    while ((c = getchar()) != EOF)    // getchar - pobierz znak
        {printf("%c\n", c); scanf("%c", c);}
    printf("%c - to koniec pliku\n", c);
    

    return 0;
}