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
    int i; 
    char ch;
     
    for(i = 0; str[i] != '\0'; ++i){
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
        res[i] = ch;
    }
	return res;
}

char*   immutableXor(const char* str, char* key){
	char* res = malloc((strlen(str) + 1) * sizeof(char));
	int i = 0;

	for (i = 0; i <= strlen(str); ++i){
		res[i] = str[i] ^ key[i % strlen(key)];
	}

	res[i] = '\0';
    return res;
}

void	muttableXor(char* str, char* key){
	for (int i = 0; i < strlen(str); ++i){
		str[i] = str[i] ^ key[i % strlen(key)];
    }
}

void    muttableUpper(char* str){
    while (*str){
        if ('a' <= *str && *str <= 'z'){
            *str += 'A' - 'a';
        }
        ++str;
    }
}

char*   immutableUpper(const char* str){
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    int i = 0;

    for (i = 0; i <= strlen(str); ++i){

        if ('a' <= str[i] && str[i] <= 'z') {
            res[i] = str[i] + 'A' - 'a';
        }

        else {
            res[i] = str[i];
        }
    }

    return res;
}

void    muttableLower(char* str){
    while (*str){

        if ('A' <= *str && *str <= 'Z'){
            *str += 'a' - 'A';
        }
        ++str;
    }
}

char*   immuttableLower(const char* str){
    char* res = malloc((strlen(str) + 1) * sizeof(char));

    for (int i = 0; i <= strlen(str); ++i){

        if ('A' <= str[i] && str[i] <= 'Z'){
            res[i] = str[i] + 'a' - 'A';
        }

        else{
            res[i] = str[i];
        }
    }
    return res;
}

void    muttableLastSpace(char str[]){
    int first = 0;
    int last = strlen(str) - 1;
    
    while(str[first] == ' '){
        ++first;
    }
    
    while(str[last] == ' '){
        --last;
    }

    int len = last - first + 1;

    for (int i = 0; i <= len; ++i){
        str[i] = str[i + first];
    }

    str[len] = '\0';
}

char*   immutableLastSpace(const char* str){
    char* res = malloc(strlen(str) * sizeof(char));
    int j = 0;

    for (int i = 0; i < strlen(str); ++i){

        if (str[i] != ' '){
            res[j] = str[i];
            ++j;
        }

        else{
            continue;
        }
    }

    res[j] = '\0';
    return res;
}

void    muttableFilterSpace(char str[]){
    int j = 0;

    for (int i = j = 0; str[i] != '\0'; ++i){

        if (str[i] != ' '){
            str[j] = str[i];
            ++j;
        }
        
    str[j] = '\0';
    }
}

char*   immutableFilterSpace(const char* str){
    int j = 0;
    char* res = malloc(strlen(str) * sizeof(char));

    for (int i = 0; str[i] != '\0'; ++i){

        if (str[i] != ' ') {
            res[j] = str[i];
            ++j;
        }
    }

    res = realloc(res, (1 + j) * sizeof(char));
    res[j] = '\0';
    return res;
}

void    muttableFilter(char str[]){
    int k = 0;

    for (int i = 0; str[i] != '\0'; ++i){

        if (str[i] == ' ' || str[i] >= 'a' && str[i] <= 'z' 
        || str[i] >= 'A' && str[i] <= 'Z' 
        || str[i] >= '0' && str[i] <= '9'){
            str[k] = str[i];
            ++k;
        }
   }

   str[k] = '\0';
}

char*   immutableFilter(const char* str){
    int j = 0;
    char* res = malloc(strlen(str) * sizeof(char));

    for (int i = 0; i < strlen(str); ++i){

        if(str[i] == ' ' || (str[i] >= '0' && str[i] <= '9') 
        || (str[i] >= 'A' && str[i] <= 'Z') 
        || (str[i] >= 'a' && str[i] <= 'z')){
            res[j] = str[i];
            ++j;
        }
    }

    res = realloc(res, (1 + j) * sizeof(char));
    res[j] = '\0';
    return res;
}

int     ifLetter(char* str){
    int bul;

    while (*str){

        if (*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z' || *str == ' '){
            bul = 1;
        }

        else{
            bul = 0;
            return bul;
        }

        ++str;
    }

    return bul;
}

int     ifNumber(char* str){
    int bul;

    while (*str){

        if (*str >= '0' && *str <= '9' || str[0] == '-'){
            bul = 1;
        }

        else{
            bul = 0;
            return bul;
        }
            ++str;
    }

    return bul;
}
