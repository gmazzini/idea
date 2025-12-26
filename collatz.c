#include <stdio.h>

void collatz(long long n,long long *max, long *len){
  *max=0; *len=0;
  for(;;){
    if(n==1)return;
    if(n%2==0)n=n/2;
    else n=3*n+1;
    *len++;
    if(n>*max)*max=n;
  }
}

int main(){
  long long n,max;
  long len;

  for(n=1;n<100;n++){
   collatz(n,&max,&len);
   printf("%lld,%lld,%ld\n",n,max,len);
  } 
}
