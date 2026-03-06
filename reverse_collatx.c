#include <stdio.h>
#include <stdlib.h>

void cc(long long n){
  printf("%lld ",n);
  if((n-1)%3==0)cc((n-1)/3);
  cc(n*2);
}

int main(int argc,char *argv[]){
  long long t,n;
  t=atoll(argv[1]);
  cc(2);
}
