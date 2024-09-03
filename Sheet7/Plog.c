#include<stdio.h>
#include<math.h>

int logarithm(long long n){
  if(n==1) {return 0;}

  return 1 + logarithm(n/2);
}
int main(){
    long long n;
    scanf("%lld",&n);

      int res = logarithm(n);

      
      printf("%d\n",res);
      
      return 0;
}