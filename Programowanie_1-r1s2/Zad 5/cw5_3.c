#include<stdio.h>
#include<ctype.h>
#include<string.h>

int getch(void);
void ungetch(int);

/* strcat: dopisz tekst z t na koniec tekstu w s - wersja wskaźnikowa */

int ptr_strcat(char *s, char *t){
    return *s + *t; 
}


int main(){


    char *stString;
    char *ndString;

    *stString = getchar();
    *ndString = getchar();

    ptr_strcat(stString, ndString);
    
}