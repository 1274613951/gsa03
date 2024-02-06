#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  int count = 0;
  for(int i = 0; i < size; i++){
    if(a[i]> 2){
      for(int j = 2; j < a[i]; j++)
      if(a[i]%j != 0){
          count += 1;
      }
    }
  }
  return count;
  }; // STUB!  Replace with correct code.

