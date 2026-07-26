#include "allergies.h"

bool is_allergic_to(allergen_t allergen, int score) {
  score %= 256;
  return (score & (1 << allergen)) != 0;
}

allergen_list_t get_allergens(int score) {
  allergen_list_t list;
  list.count = 0;

  score %= 256;

  for (int i = 0; i < ALLERGEN_COUNT; i++) {
    list.allergens[i] = is_allergic_to((allergen_t)i, score);

    if (list.allergens[i]) {
      list.count++;
    }
  }

  return list;
}