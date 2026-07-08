#include "hamming.h"
#include <string.h>
int compute(const char* string1, const char* string2){

  int length1= strlen(string1);
  int length2 = strlen(string2);
  if (length1 != length2){
    return -1;
  }
  int hamming = 0;

  for ( int i = 0; i < length1 ; i++){
    if (string1[i]!= string2[i]){
      hamming++;
    }
  }
  return hamming;
}
