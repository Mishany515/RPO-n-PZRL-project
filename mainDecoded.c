#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Coder.h"

int main(int argc, char* argv[]){
    char* cipher = argv[1];
    char* str = argv[2];
    char* key = argv[3];

    if (strcmp(cipher, "--caesar") == 0){
        if (ifNumber(key)){
            int pass = atoi(key) * (-1);
            muttableCaesar(str, pass);
            printf("%s\n", str);
        }

        else{
            printf("The key must be a number\n");
        }
    }

    else if (strcmp(cipher, "--xor") == 0){
        if (ifLetter(key)){
            muttableXor(str, key);
            printf("%s\n", str);
        }

        else{
            printf("The key must consist of letters\n");
        }
    }

    else{
        printf("Wrong entry of the cipher\n");
    }
}
