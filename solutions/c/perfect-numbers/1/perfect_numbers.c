#include "perfect_numbers.h"

int classify_number(int number){
    if (number<=0){
        return ERROR;
    }

    int sum = 0;
    int temp = number;
    for (int i = 1; i < (int)number/2 + 1;i++){
        if (number%i == 0){
            sum = sum + i;
        }
    }

    if (sum==temp){
        return PERFECT_NUMBER;
    } else if (sum > temp){
        return ABUNDANT_NUMBER;
    } else{
        return DEFICIENT_NUMBER;
    }
}
