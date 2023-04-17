#include<stdio.h>

int get_sum(int a , int b) {
    int sucet =0;
  if(a==b){
    return a;
  }
  if(a<b){
    for(int i=a;i!=b+1;i++){
      sucet=sucet+i;
    }
    return sucet;
  }
  if(a>b){
    for(int i=b;i!=a+1;i++){
      sucet=sucet+i;
    }
    return sucet;
  }
  return sucet;
}
