#include <string.h>
#include <stdlib.h>
void    muttableCaesar(char* str, int key);
char*   immutableCaesar(const char* str, int key);
char*   immutableXor(const char* str, char* key);
void	muttableXor(char* str, char* key);
void    muttableUpper(char* str);
char*   immutableUpper(const char* str);
void    muttableLower(char* str);
char*   immuttableLower(const char* str);
void    muttableLastSpace(char str[]);
char*   immutableLastSpace(const char* str);
void    muttableFilterSpace(char str[]);
char*   immutableFilterSpace(const char* str);
void    muttableFilter(char str[]);
char*   immutableFilter(const char* str);
int     ifLetter(char* str);
int     ifNumber(char* str);