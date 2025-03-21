#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *xor_encryption(const char text[], const char key[]) {
    int lenText = strlen(text);
    int lenKey = strlen(key);


    char *encryptedText = (char *)malloc(lenText + 1);
    if (encryptedText == NULL) {
        printf("Memory Allocation Failed!\n");
        exit(1);
    }

    
    for (int i = 0; i < lenText; i++) {
        encryptedText[i] = text[i] ^ key[i % lenKey];
    }
    encryptedText[lenText] = '\0'; 
    return encryptedText; 
}

int main() {
    char original_txt[] = "hello world";  
    char key[] = "gjjkhfuiyt";                 
    
    char *encryptedText = xor_encryption(original_txt, key);

    
    printf("Encrypted Text (Hex): ");
    for (int i = 0; i < strlen(original_txt); i++) {
        printf("%02X ", (unsigned char)encryptedText[i]);
    }
    printf("\n");

    
    char *decryptedText = xor_encryption(encryptedText, key);

    
    printf("Decrypted Text: %s\n", decryptedText);

   
    free(encryptedText);
    free(decryptedText);

    return 0;
}
