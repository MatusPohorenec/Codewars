#include<stdio.h>
#include<string.h>
int nbYear(int p0, double percent, int aug, int p) {
  int roky ;
  for (roky =0;p0<p;roky++){
    p0=p0+p0*percent/100+aug;
  }
  return roky;
}
