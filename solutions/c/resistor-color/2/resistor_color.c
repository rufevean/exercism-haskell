#include "resistor_color.h"
#include <string.h>
#include <ctype.h>

int color_code(resistor_band_t band){

  if(band == BLACK) return 0;
  else if(band == BROWN) return 1;
  else if(band == RED) return 2;
  else if(band == ORANGE) return 3;
  else if(band == YELLOW) return 4;
  else if(band == GREEN) return 5;
  else if(band == BLUE) return 6;
  else if(band == VIOLET) return 7;
  else if(band == GREY) return 8;
  else if(band == WHITE) return 9;

  return -1; // Invalid band
 }


const resistor_band_t *colors(void) {
    static const resistor_band_t bands[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    };

    return bands;
}
