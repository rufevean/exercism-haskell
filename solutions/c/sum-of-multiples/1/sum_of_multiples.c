#include "sum_of_multiples.h"
#include <stdbool.h>
#include <stdio.h>

unsigned int sum(const unsigned int *factors, const size_t number_of_factors,
                 const unsigned int limit) {
  unsigned int result = 0;
  bool seen[10000] = {false};
  for (int i = 0; i < (int)number_of_factors; i++) {
    unsigned int temp = factors[i];
    if (temp == 0){
        continue;
    }
    for (; temp < limit;) {
      if (!seen[temp]) {
        result = result + temp;
        seen[temp] = true;
      }
      temp += factors[i];
    }
  }
  return result;
}
