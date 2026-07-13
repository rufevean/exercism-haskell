#include "raindrops.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void convert(char result[], int drops){
    if (drops%3 == 0 ){
        strcat(result,"Pling");
    } 
    if (drops%5 == 0){
        strcat(result,"Plang");
    } 
    if (drops%7 ==0){
        strcat(result,"Plong");
    } 
    if(drops%3 &&  drops%5 && drops %7){
        snprintf(result,50,"%d",drops);
    }
}