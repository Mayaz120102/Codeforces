#include<stdio.h>
#include<stdbool.h>
bool ispoweroftwo(long long n){
    if(n<=0) return false;

    while(n%2 == 0){
        n/=2;
    }
    return n ==1;
}
int main()

{
   long long n;
   scanf("%lld",&n);

   if(ispoweroftwo(n)){
    printf("YES\n");
   } else{
    printf("NO\n");
   }

   return 0;



}
