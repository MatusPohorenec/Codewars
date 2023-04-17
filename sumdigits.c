int sum_digits(int n) {
  int pom=0;
  
  if(n<0){
    n=n*-1;
  }
  
  for (;n>0;){ //while
    pom=pom+n%10;
    n=n/10;
  }
  return pom;
  
   

}