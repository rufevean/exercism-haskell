#include "two_fer.h"
#include <stdio.h>
void two_fer(char *buffer, const char *name){
    if (name){
        snprintf(buffer,50,"One for %s, one for me.",name);
    } else{
        snprintf(buffer,50,"One for %s, one for me.","you");
    }
}