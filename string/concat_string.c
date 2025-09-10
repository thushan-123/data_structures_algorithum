#include <stdio.h>
#include <stdlib.h>

int length_string(char *str){
    
    int i =0;
    for(int k=0; str[k] !='\0'; k++){
        i++;
    }
    return i;
}

char* concat_string(char *string1, char *string2){

    int len1 = length_string(string1);
    int len2 = length_string(string2);
    int size = len1 + len2 -1;

    char *string3=malloc(size);

    for(int k=0; string1[k] != '\0'; k++){
        string3[k] = string1[k];
    }

    for(int i=0; i <= len2; i++){
        string3[len1+i] =string2[i];
    }

    return string3;   // return void pointer
}



int main() {

    char string1[] = "hello";
    char string2[] = "world";

    char * s3 = concat_string(string1,string2);
    printf("%s", s3);
    printf("\n%i", length_string(s3));

    return 0;
}