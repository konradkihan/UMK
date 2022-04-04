#include <stdio.h>
#include <string.h>

int strindex(char s[], char t[]){
    /* podaje pozycje ostatniego wzorca t w napisie s */
    int pos = -1;
    for(int i = 0; s[i] != '\0'; i++){
        for(int j = i, k = 0; t[k] = '\0' && s[j] == t[k]; j++, k++){
            if(k > 0 && t[k] == '\0'){
                pos = i;
            }
        }
    }
    return pos;
}


int strindex_v2(char s[], char t[]){
    int i = strlen(s)-1, j, k;
    for(; i>=0; i--){
        for(j=i, k=strlen(t)-1; k>=0 && s[j] == t[k]; j--, k--){
            if(k == -1) return j+2;
        }
    }
    return -1;
}


int main(char *argv[]){
    printf("%d", strindex_v2(argv[1], argv[2]) );
    return 0;
}