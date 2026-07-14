#include "high_scores.h"
#include <stdint.h>
#include <stdlib.h>
int32_t personal_best(const int32_t *scores, size_t scores_len) {
  int max = scores[0];
  int length = scores_len;
  for (int i = 1; i < length; i++) {
    if (scores[i] > max) {
      max = scores[i];
    }
  }
  return max;
}

int32_t latest(const int32_t *scores, size_t scores_len) {
  int length = scores_len;
  return scores[length - 1];
}
void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min])
        min = j;
    }
    if (min != i) {
      int temp = arr[min];
      arr[min] = arr[i];
      arr[i] = temp;
    }
  }
}

void reverseArray(int arr[], int n) {
  int temp[n];
  for (int i = 0; i < n; i++)
    temp[i] = arr[n - i - 1];
  for (int i = 0; i < n; i++)
    arr[i] = temp[i];
}
size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output) {
  int32_t *temp = malloc(scores_len * sizeof(int32_t));

  for (int i = 0; i < (int)scores_len; i++) {
    temp[i] = scores[i];
  }

  selectionSort(temp, scores_len);
  reverseArray(temp, scores_len);
  int out_size = 0;
  for (int i = 0; i < 3; i++) {
    if (i > (int)scores_len - 1) {
      break;
    }
    output[i] = temp[i];
    out_size++;
  }
  return (size_t)out_size;
}
