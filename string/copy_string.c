#include <stdio.h>
#include <stdlib.h>

int length_string(char * string){
    int k = 0;

    for (int i=0; string['\0']; i++){
        k +=1;
    }

    return k;
}

char *copy_string(char *string){
    int len = length_string(string);

    if(len <=0){
        exit(1);
    }

    char *new_str = malloc(len);

    for(int i=0; i< len; i++){
        new_str[i] = string[i];
    }

    return new_str;
}


int main() {


    return 0;
}