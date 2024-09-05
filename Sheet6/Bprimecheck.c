#include<stdio.h>
#include<math.h>
int main()
{  
    long long n;
    scanf("%lld",&n);

    if(n==1){
        printf("NO\n");
        return 0;
    }
    
    for(int i=sqrt(n); i>=2; i--){
        if(n%i ==0){
        printf("NO\n");
        return 0;
        }
    }
        printf("YES\n");
 
        return 0;

}