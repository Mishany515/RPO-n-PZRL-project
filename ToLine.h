#include <string.h>
#include <stdlib.h>
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
