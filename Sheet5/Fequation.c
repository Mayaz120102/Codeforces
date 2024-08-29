#include<stdio.h>
//
// Function to compute power of X^Y without using built-in functions
long long power(long long x, long long y){
 long long result = 1;
 for (int i = 1; i<= y; i++)
 {
    result *= x;
 }
 return result;
}
// Function to calculate the sum S

int main(){
    long long  x,n;
    scanf("%lld %lld", &x,&n);
    
    long long s =0;
    for (int  i = 2; i <= n; i+=2)
    {
        s += power(x, i);
    }
    
   
    printf("%d\n",s);
    
    return 0;
    
}

