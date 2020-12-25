#include "ToLine.h"

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
    strcpy(res, str);
    muttableUpper(res);
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
    strcpy(res, str);
    muttableLower(res);
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
     str[last + 1] = '\0';
    
    int len = last - first + 1;

    for (int i = 0; i <= len; ++i){
        str[i] = str[i + first];
    }

    str[len] = '\0';
}

char*   immutableLastSpace(const char* str){
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    muttableLastSpace(res);
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
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    muttableFilterSpace(res);
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
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    muttableFilter(res);
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
