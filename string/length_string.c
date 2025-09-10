#include <stdio.h>

int length_string(char *str){
    
    int i =0;
    for(int k=0; str[k] !='\0'; k++){
        i++;
    }
    return i;
}


int main(){

    char x[] = "hello";
    printf("%i", length_string(x));

    return 0;
}