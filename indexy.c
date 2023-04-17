int find_even_index(const int *values, int length) {
  int sucetvpravo=0;
  int sucetvlavo=0;
  
  for (int index =0;index<length;index++){
    for(int i=0;i<length;i++){
      if (i<index){
        sucetvlavo+=values[i];
      }
      if(i>index){
        sucetvpravo+=values[i];
      }
      
    }
    if(sucetvpravo==sucetvlavo){
      return index;
    }
    sucetvlavo=0;
    sucetvpravo=0;
  }
  return -1;
}
