#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int countEvens(int a[], int size) {
  int count = 0;
  for(int i =0; i < size; a++){
    if (a[i]%2 == 0){
      count += 1;
    }
  }
  return count;
}
