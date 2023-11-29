#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char c[60];
    while(gets(c) != NULL){
        int l = strlen(c);
        int d = 0;
        for(int i =0; i<l; i++){
            if(c[i] != ' ')
                d++;
            if(d%2 == 1)
                c[i] = toupper(c[i]);
            else
                c[i] = tolower(c[i]);
        }
        c[l] = '\0';
        printf("%s\n", c);
    }


    return 0;
}
