#include <stdio.h>
#include <stdlib.h>

long pp;

void cc(long long n,long p){
  long long tmp;
  printf("%lld,%ld ",n,p);
  if(p==pp){
    printf("\n");
    return;
  }
  cc(n*2,p+1);
  if((n-1)%3==0){
    tmp=(n-1)/3;
    if(tmp>1 && tmp&2==1)cc(tmp,p+1);
  }
}

int main(int argc,char *argv[]){
  pp=atol(argv[1]);
  cc(1,1);
}
