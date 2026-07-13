#include "eliuds_eggs.h"
#include <math.h>

int egg_count(int dec){
    int res = 0;
    while (dec>0){
        int mod = dec % 2;
        if (mod == 1){
            res++;
        }
        dec = (int) dec /2;
    }
    return res;
}

