#include "grains.h"
#include <math.h>


uint64_t square(uint8_t index){
    if (index < 1 || index > 64){
        return 0;
    }
    return (uint64_t)1 << (index - 1);
}

uint64_t total(void){
    uint64_t sum = 0;
    for( uint64_t i =0;i<65;i++){
        sum = sum + square(i);
    }
    return sum;
}

