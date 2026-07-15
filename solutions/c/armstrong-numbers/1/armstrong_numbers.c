#include "armstrong_numbers.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
bool is_armstrong_number(int candidate){
    int digits = (int)log10(candidate) + 1;
    int temp = candidate;
    int sum = 0;
    while (temp>0){
        sum = sum + pow(temp%10,digits);
        temp = (int) (temp / 10) ;
    }
    return sum == candidate;
    
}