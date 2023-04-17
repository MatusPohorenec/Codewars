#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void fakeBin(const char *digits, char *buffer) {
  // Please place result in the memory pointed to by
  // the buffer parameter. Buffer has enough memory to
  // accommodate the answer as well as the null-terminating
  // character.
  
  for (int i =0;i<(int)strlen(digits);i++){
    
    if(digits[i]<'5'){ //terminator 
      buffer[i]='0';
    }
     if(digits[i]>='5'){
      buffer[i]='1';
    }
  }
  buffer[strlen(digits)]='\0';
}