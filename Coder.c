#include "Coder.h"

void    muttableCaesar(char* str, int key){
    int i; 
    char ch;

    for (i = 0; str[i] != '\0'; ++i){
        ch = str[i];

        if(ch >= 'a' && ch <= 'z'){
            if (ch + key < 'z'){
                ch = ch + key;
            }

            else if (ch + key > 'z'){
                ch = 'a' + (ch + key) % ('z' - 'a' + 1);
            }

            else if (ch + key < 'a'){
                ch = 'z' - ('a' % ch) + 1;
            }
        }
        str[i] = ch;
    }
}

char*   immutableCaesar(const char* str, int key){
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    muttableCaesar(res, key);
    return res;
}

void    muttableXor(char* str, char* key){
    for (int i = 0; str[i] != '\0'; ++i){
        str[i] = str[i] ^ key[i % strlen(key)];
    }
}

char*   immutableXor(const char* str, char* key){
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    muttableXor(res, key);

    return res;

}
