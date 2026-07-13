#include "resistor_color_duo.h"
#include <math.h>
int color_code(resistor_band_t colors[]){
    int sum = 0;
    for (int i = 0;i<2;i++){
        if (colors[i] == BLACK) {sum = sum*pow(10,i) + BLACK;}
        else if (colors[i] == BROWN) {sum = sum*pow(10,i) + BROWN;}
        else if (colors[i] == RED) {sum = sum*pow(10,i) + RED;}
        else if (colors[i] == ORANGE) {sum = sum*pow(10,i) + ORANGE;}
        else if (colors[i] == YELLOW) {sum = sum*pow(10,i) + YELLOW;}
        else if (colors[i] == GREEN) {sum = sum*pow(10,i) + GREEN;}
        else if (colors[i] == BLUE) {sum = sum*pow(10,i) + BLUE;}
        else if (colors[i] == VIOLET) {sum = sum*pow(10,i) + VIOLET;}
        else if (colors[i] == GREY) {sum = sum*pow(10,i) + GREY;}
        else if (colors[i] == WHITE) {sum = sum*pow(10,i) + WHITE;};
    };
    return sum;
}
