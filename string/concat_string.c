#include <stdio.h>
#include <stdlib.h>

char* concat_string(char *string1, char *string2){

    int len1 = sizeof(string1)/sizeof(string1[0]);
    int len2 = sizeof(string2)/sizeof(string2[0]);
    int size = len1 + len2;

    char *string3=malloc(len1+len2-1);

    for(int k=0; k != '\0'; k++){
        string3[k] = string1[k];
    }

    for(int i=0; i <= len2; i++){
        string3[len1+i] =string2[i];
    }

    return string3;
}



int main() {


    return 0;
}