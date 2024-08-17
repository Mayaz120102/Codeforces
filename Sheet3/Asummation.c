#include<stdio.h>
#include<stdlib.h>
int main(){
   int A[100], sum =0;
   int n,i;
   scanf("%d",&n);
   for(i=0; i<n; i++){
    scanf("%d",&A[i]);
   }
   for(i=0; i<n; i++){
    sum = sum + A[i];
   }
   printf("%d", abs(sum));
 return 0;

}