#include<stdio.h>
//
// Function to compute power of X^Y without using built-in functions
int power(int x, int y){
 int result = 1;
 for (int i = 0; i < y; i++)
 {
    result *= x;
 }
 return result;
}
// Function to calculate the sum S
int calcSum(int x, int n){
    int S = 0;
    S += power(x,0)-1; // Initial term (X^0 - 1)

    for (int i = 2; i <= n; i+=2)
    {
      S += power(x,i);
    }
   return S; 
}
int main(){
    int X,N;
    scanf("%d %d", &X,&N);
    
    int result = calcSum(X,N);
    printf("%d\n",result);
    
    return 0;
    
}

