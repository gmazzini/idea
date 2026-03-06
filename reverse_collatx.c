#include <stdio.h>
#include <stdlib.h>

void cc(long long n,long p){
  printf("%lld,%ld ",n,p);
  if(p==20)return;
  cc(n*2,p+1);
  if(n>4 && (n-1)%3==0)cc((n-1)/3,p+1);
}

int main(int argc,char *argv[]){
  long long t,n;
  t=atoll(argv[1]);
  cc(1,1);
}
