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
    // char firstString, secondString;
    // int *firstSize, *secondSize;

    // printf("Read first string: ");
    // firstString = scanf("%s");
    // *firstSize = sizeof(firstString);
    
    // printf("Read string to concatenate: ");
    // secondString = scanf("%s");
    // secondSize = sizeof(secondString);

    // array_strcat(firstString[firstSize], secondString[secondSize]){
            
    //     }
    
    char *stString;
    char *ndString;
    
    *stString = getchar();
    *ndString = getchar();

    ptr_strcat(stString, ndString);
    



}