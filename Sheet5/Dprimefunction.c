#include<stdio.h>

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    if(n==2){
        return 1;
    }
for(int i=2; i*i<=n; i++){
    if(n%i == 0){
        return 0;
    }
  }
  return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);

    if(isPrime(n)){
      printf("YES\n"); 
 }
    else{
        printf("NO\n");
    }
  }
}