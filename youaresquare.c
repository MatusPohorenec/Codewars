#include <stdbool.h>
#include <math.h>

bool is_square(int n) {
  double i=round(sqrt(n));
  if(i*i==n){
    return 1;
  }
  return 0;
}