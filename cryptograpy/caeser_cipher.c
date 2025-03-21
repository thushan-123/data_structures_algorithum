#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *caeser_cipher_encrypt(char str[], int key){

    int length = strlen(str);

    if (length != 0){

        for (int i=0; i< length; i++){

            if(isalpha(str[i])){
                char base = isupper(str[i]) ? 'A' : 'a';
                str[i] = (str[i] - base + key) % 26 + base;
            }else{
                exit(1);
            }
        }

    }else{
        exit(1);
    }

    return str;
}

char *caeser_cipher_decrypt(char str[], int key){

    int length = strlen(str);

    if(length != 0){

        for (int i=0; i<length; i++){
            int base = isupper(str[i]) ? 'A' : 'a' ;
            str[i] = (str[i] - base - key + 26) % 26 + base;
        }
    }else{
        exit(1);
    }

    return str;
}

char *brute_force (char str[]){

    int length = strlen(str);

    if (length != 0){

        char character_upper[] = {'A','B','C','D','E','F','G','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

        char character_lower[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','u','v','w','x','y','z'};
        // finding the encryption key
        for (int key=0; key< 27; key++){

            int base = isupper(str[0]) ? 'A' : 'a';

            for (int i =0; i< 27; i++) {

                if (str[0] == ((character_upper[i] - base - key +26) %26 + base) && base == 'A'){

                    return caeser_cipher_decrypt(str,key);
                    
                }else if (str[0] == ((character_lower[i] - base -key + 26) % 26 + base) && base == 'a'){
    
                    return caeser_cipher_decrypt(str, key);
                }
            }     
            
        }

    }else{
        exit(1);
    }
}

int main() {
    char k[] = "abcdefZ";

    char *encrypt = caeser_cipher_encrypt(k,3);
    printf("encrypt value : %s \n", encrypt);

    printf("decrypt using key %s \n", caeser_cipher_decrypt(encrypt,3));

    printf("find value using brute force: %s \n\n", brute_force(encrypt));



    return 0;
}