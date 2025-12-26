#include <stdio.h>

void collats(long long n,long long *max, lonf *dutarion){
  *max=0; *duration=0;
  for(;;){
    if(n==1)return;
    if(n%2==0)n=n/2;
    else n=3*n+1;
    *duration++;
    if(n>*max)*max=n;
  }
}

int main(){
  long long n,max;
  
  for(n=1;n<100;n++){
    
}
