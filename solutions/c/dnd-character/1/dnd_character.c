#include "dnd_character.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int modifier(int score) {
  float value = ((float)(score - 10) / 2);
  return floor(value);
}

int dice(void) {
  int upper_bound = 6;
  int value = (rand() % upper_bound) + 1;
  return value;
}

dnd_character_t make_dnd_character(void) {
  srand(time(NULL));
  int abilities[7];
  for (int i = 0; i < 6; i++) {
    int score = ability();
    abilities[i] = score;
  }
  int hitpoints = 10 + floor((float)(abilities[2] - 10) / 2);
  abilities[6] = hitpoints;
  dnd_character_t joe = {
      abilities[0], abilities[1], abilities[2], abilities[3],
      abilities[4], abilities[5], abilities[6],
  };
  return joe;
}

int ability(void) {
  int sum = 0;
  int min = 7;
  for (int j = 0; j < 4; j++) {
    int value = dice();
    sum = sum + value;
    if (min == 7) {
      if (min > value) {
        min = value;
      }
    } else {
      min = value;
    }
  }
  int score = sum - min;
  return score;
}
