#include "binary.h"
#include <string.h>
#include <math.h>
int convert(const char* input){
    int dec = 0;
    int size = (int) strlen(input);
    int exp = 0;
    int i;
    for (i = size-1;i>=0;i--){
        if (input[i] != '0' && input[i] != '1'){
            return -1;
        }
        dec  = dec + ( (input[i]-'0') * pow(2,exp));
        exp++;
    }
    return dec;
}