#include<stdio.h>

#define NONBLANK 'a' // dowolny znak różny od odstępu

int main(){
    int c, lastc;
    lastc = NONBLANK;
    while((c = getchar()) != EOF){
        if(c != ' ') 
            putchar(c);
        else if(c == ' ' && lastc != ' ') 
            putchar(c);
        lastc = c;
    }
}

