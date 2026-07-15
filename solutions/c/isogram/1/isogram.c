#include "isogram.h"
#include <ctype.h>
#include <string.h>

int is_isogram(const char phrase[]) {
  if (phrase == NULL)
    return false;
  int flags[26] = {0};
  int size = strlen(phrase);

  int val;
  for (int i = 0; i < size; i++) {
    int diff = tolower(phrase[i]) - 'a';
    if (diff > 26 || diff < -1) {
      continue;
    }
    val = flags[diff];
    if (val == 1) {
      return false;
    }
    flags[diff] = 1;
  }
  return true;
}
