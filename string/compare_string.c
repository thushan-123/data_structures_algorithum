#include <stdio.h>


int compare_string(char *string1, char *string2){

    int f =1;

    int len1 = sizeof(string1)/sizeof(string1[0]);
    int len2 = sizeof(string2)/sizeof(string2[0]);
    //printf("%i %i", len1, len2);
    if(len1 == len2){

        for(int i=0; string1[i] !='\0' || string2[i] !='\0' ; i++){
            if(string1[i] != string2[i]){
                f =0;
                break;
            }
        }
    }else{
        f=0;
    }
    
    

    return f;  // 1 is equal 0 is not equal
    
}

int main() {

    char s1[] = "hello";
    char s2[] = "hello";
    char s3[] = "hello1";

    printf(" compare %i \n", compare_string(s1,s2));
    printf(" compare %i \n", compare_string(s1,s3));
    printf(" compare %i \n", compare_string(s3,s2));

    return 0;
}