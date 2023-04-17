#include <stdlib.h>
#include<ctype.h>
#include <string.h>
char **capitalize(const char *test_str) {
  
  char **pole=calloc(2,sizeof(char*)); //* normal ** 2 rozmerne
  
  pole[0]=calloc(strlen(test_str)+1,sizeof(char));
  pole[1]=calloc(strlen(test_str)+1,sizeof(char));
  
  for (int i=0;i<(int)strlen(test_str);i++){
    if(i%2==0){
      pole[0][i]=toupper(test_str[i]);
    }
    else{
      pole[0][i]=tolower(test_str[i]);
    }
  }
   for (int i=0;i<(int)strlen(test_str);i++){
    if(i%2==1){
      pole[1][i]=toupper(test_str[i]);
    }
    else{
      pole[1][i]=tolower(test_str[i]);
    }
  }
  return pole;