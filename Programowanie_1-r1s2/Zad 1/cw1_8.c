#include<stdio.h>
/* zlicz znaki odstępu, tabulacji i nowego wiersza */
int main(){
    int c, nb = 0, nt = 0, nl = 0;
    
    while ((c = getchar()) != EOF){
        if(c == ' ') ++nb;  // zliczanie spacji
        else if(c == '\t') ++nt;    // zliczanie tabulacji
        else if(c == '\n') ++nl;    // zliczanie enterów
    }

    printf("nb = %d \nnt = %d \nnl = %d\n", nb, nt , nl);
}