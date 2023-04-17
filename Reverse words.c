#include <stdlib.h>
#include<string.h>

char* reverseWords(const char* text) {
  int pom=0;
  char *prepisany=calloc(strlen(text),sizeof(char));
  int koniec=0;
  int zaciatok=0;
  
  for (int i=zaciatok;i<=(int)strlen(text);i++ ){    
     if(text[i]==' '||text[i]=='\0'){
       koniec=i-1;
       for (int b=koniec;b>=zaciatok;b--){
         prepisany[pom]=text[b];
         pom++;
       }
       prepisany[i]=text[i];
       pom++;
       zaciatok=i+1;
     }
  }
  return prepisany;
}