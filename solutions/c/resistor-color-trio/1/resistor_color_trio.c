#include "resistor_color_trio.h"
#include <math.h>
#include <stdio.h>

int color(resistor_band_t color) {
  if (color == BLACK)
    return 0;
  if (color == BROWN)
    return 1;
  if (color == RED)
    return 2;
  if (color == ORANGE)
    return 3;
  if (color == YELLOW)
    return 4;
  if (color == GREEN)
    return 5;
  if (color == BLUE)
    return 6;
  if (color == VIOLET)
    return 7;
  if (color == GREY)
    return 8;
  if (color == WHITE)
    return 9;
  return -1;
}
resistor_value_t color_code(resistor_band_t colors[]) {
  int values[3];
  for (int i = 0; i < 3; i++) {
    values[i] = color(colors[i]);
  };
  resistor_value_t result;
  result.value = (values[0] * 10 + values[1]) * pow(10, values[2]);
  if (result.value < 1000) {
    result.unit = OHMS;
  } else if (result.value < 1000000) {
    result.value = (long)result.value / 1000;
    result.unit = KILOOHMS;
  } else if (result.value < 1000000000) {
    result.value = (long)result.value / 1000000;
    result.unit = MEGAOHMS;
  } else {
    result.value = (long)result.value / 1000000000;
    result.unit = GIGAOHMS;
  }
  return result;
}
