#include <stdio.h>
#include <stdlib.h>

void collatz(long long n,long long *max, long long *len){
  *max=0; *len=0;
  for(;;){
    if(n==1)return;
    if(n%2==0)n=n/2;
    else n=3*n+1;
    (*len)++;
    if(n>*max)*max=n;
  }
}

int main(int argc,char *argv[]){
  long long n,max,len,top;
  top=atoll(argv[1]);
  for(n=1;n<top;n++){
   collatz(n,&max,&len);
   printf("%lld,%lld,%lld\n",n,max,len);
  } 
}
