#include "luhn.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
bool luhn(const char *num) {
  bool flag = false;
  int length = strlen(num);
  int *new_arr = malloc(length * sizeof(int));
  int count = 0;
  for (int i = length - 1; i > -1; i--) {
    if (num[i] == ' ') {
      continue;
    }
    if (num[i] - '0' >= 10 || num[i] - '0' < 0) {
      return false;
    }
    if (flag) {
      new_arr[i] = (num[i] - '0') * 2;
      if (new_arr[i] > 9) {
        new_arr[i] = new_arr[i] - 9;
      }
    } else {
      new_arr[i] = num[i] - '0';
    }
    flag = !flag;
    count++;
  }
  if (count <= 1) {
    return false;
  }
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum = sum + new_arr[i];
  }
  if (sum % 10 == 0) {
    return true;
  }
  return false;
}