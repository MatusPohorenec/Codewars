
#include <stddef.h>
#include <math.h>


unsigned binary_array_to_numbers(const unsigned *bits, size_t count){
  long int sucet =0;
  for(int i=count-1;i>=0;i--){
    sucet=sucet+(pow(2,count-i-1)*bits[i]);
  }
  return sucet;
}

