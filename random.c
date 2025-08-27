#include "random.h"


const char* rand_string(char* s, size_t size){
    char rands;
    for (int i=0; i < size; i++){
        rands = 'a' + rand() % 26;
        *s = rands;
        s++;
    }
    *s = '\0';
    return s;
    
}