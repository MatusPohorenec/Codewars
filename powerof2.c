#include <stdbool.h>

bool power_of_two(const int x) {
  int quack=1;
while(quack<=x){
  if(quack==x){
    return true;
  }
  quack=quack*2;
}
  return false;


}