//solution must allocate all required memory
//and return a free-able buffer to the caller.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *disemvowel(const char *str)
{
  char *prepisany=calloc(strlen(str),sizeof(char));
  int pom=0;
  for (int i=0;i<strlen(str);i++){
    if(str[i]!='a'&& str[i]!='A' && str[i]!='e'&& str[i]!='E' && str[i]!='i' && str[i]!='I' && str[i]!='o' && str[i]!='O' && str[i]!='u' && str[i]!='U'){
      prepisany[pom]=str[i];
      pom++;
    }
  }
  return prepisany;
}


