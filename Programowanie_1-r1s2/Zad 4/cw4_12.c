#include<stdio.h>
#include<math.h>

/* #rozyebane */

void itoa(int n, char s[]){
    static int i;
    if(n/10) itoa(n/10, s);
    else{
        i = 0;
        if(n<0) s[i++] = '-';
    }
    s[i++] = n % 10 + '0';
    s[i] = '\0';
}


int main(int argc, char *argv[]){
    char s[256];
    itoa(argc, s);
    printf("%s\n", s);
    return 1;
}