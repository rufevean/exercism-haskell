#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H

typedef enum {
  BLACK,
  BROWN,
  RED,
  ORANGE,
  YELLOW,
  GREEN,
  BLUE,
  VIOLET,
  GREY,
  WHITE,
} resistor_band_t;
int color(resistor_band_t);
typedef enum {
  GIGAOHMS,
  MEGAOHMS,
  KILOOHMS,
  OHMS,
} resistor_unit_t;
typedef struct {
  long value;
  resistor_unit_t unit;
} resistor_value_t;

resistor_value_t color_code(resistor_band_t[]);

#endif
