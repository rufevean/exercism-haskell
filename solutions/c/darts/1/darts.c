#include "darts.h"
#include <math.h>

int score(coordinate_t point){
    double dist = cartesian(point.x,point.y);
    if (dist>10){
        return 0;
    } else if (dist > 5){
        return 1;
    } else if (dist > 1){
        return 5;
    } else {
        return 10;
    }
}

double cartesian(float x, float y){
    double res = sqrt(pow(x-0,2)+pow(y-0,2));
    return res;
}