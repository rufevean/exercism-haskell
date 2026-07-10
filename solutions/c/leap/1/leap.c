#include "leap.h"


bool leap_year(int year){
    if (!(year %4)){
        if (year%100)return true;
        if (!(year%400))return true;
    }
    return false;
}