#include "pangram.h"
#include <ctype.h>
#include <string.h>
bool is_pangram(const char *sentence) {
  if (sentence == NULL || strlen(sentence) == 0) {
    return false;
  }
  int flags[26] = {0};
  int len = strlen(sentence);
  for (int i = 0; i < len; i++) {
    if (sentence[i] == ' ') {
      continue;
    }
    flags[tolower(sentence[i]) - 'a'] = 1;
  }
  for (int j = 0; j < 26; j++) {
    if (flags[j] == 0) {
      return false;
    }
  }
  return true;
}
