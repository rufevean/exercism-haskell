#include "space_age.h"

float age(planet_t planet, int64_t seconds){
    float earth_age = earth_age_calc(seconds);
    switch (planet){
        case EARTH:
            return earth_age;
        case MERCURY:
            return earth_age*(1/0.2408);
        case VENUS:
            return earth_age*(1/0.61519);
        case MARS:
            return earth_age*(1/1.8808);
        case JUPITER:
            return earth_age*(1/11.862615);
        case SATURN:
            return earth_age*(1/29.447498);
        case URANUS:
            return earth_age*(1/84.016846);
        case NEPTUNE:
            return earth_age*(1/164.79);
        default:
            return -1;
    };
}

float earth_age_calc(int64_t seconds){
    return (float) seconds/31557600;
}
