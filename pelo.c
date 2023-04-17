#include <stddef.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

char *series_sum(const size_t n){
if(n==0){
  char*pelo=calloc(500,sizeof(char));
  pelo[3]='0';
  pelo[2]='0';
  pelo[1]='.';
  pelo[0]='0';
  return pelo;
}
  double pom =0;
for (int i=0;i<(int)n;i++){
  pom=pom+(1.000/(1.000+3*i));
}
  pom=round(pom*100);
  int pretypovane=pom;
  
  
  if(pretypovane<1000){
    char*pelo=calloc(500,sizeof(char));
  
  pelo[3]=pretypovane%10+'0';
  pretypovane=pretypovane/10;
  
  pelo[2]=pretypovane%10+'0';
  pretypovane=pretypovane/10;
  
  pelo[1]='.';
  
  pelo[0]=pretypovane%10+'0';
  
  return pelo;
  }
  else{
  char*pelo=calloc(600,sizeof(char));
    
  pelo[4]=pretypovane%10+'0';
  pretypovane=pretypovane/10;
  
  pelo[3]=pretypovane%10+'0';
  pretypovane=pretypovane/10;
  
  pelo[2]='.';
  
  pelo[1]=pretypovane%10+'0';
  pretypovane=pretypovane/10;
    
  pelo[0]=pretypovane%10+'0';
  return pelo;
  }
  }


