#include<ctype.h>
char *accum(const char *source){
  char *pole=calloc(1000,sizeof(char));
  int index=0;
  for (int i=0;i<(int)strlen(source);i++){
    for(int n=0;n<=i;n++){
      if(n==0){
        pole[index]=toupper(source[i]);
        
      }
      else{
        pole[index]=tolower(source[i]);
      }
      index++;
      
    }
    if(i!=strlen(source)-1){
    pole[index]='-';
    index++;
      }
  }
  return pole;
  
}