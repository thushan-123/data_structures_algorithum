#include <stdio.h>


int compare_string(char string1[], char string2[]){

    int f =1;

    int len1 = sizeof(string1)/sizeof(string1[0]);
    int len2 = sizeof(string2)/sizeof(string2[0]);
    if(len1 == len2){

        for(int i=0; string1[i] !='\0', i++){
            if(string1[i] != string2[i]){
                continue;
            }else{
                f =0;
                break;
            }
        }
    }else{
        f=0;
    }
    
    

    return f;
    
}

int main() {


    return 0;
}