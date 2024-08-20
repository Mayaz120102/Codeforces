#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n,i,j;
 scanf("%d", &n);
 char a[n+1];
 scanf("%s", a);
  
  
  int sum=0;
  for(i=0; i<n; i++){
    sum  = sum +a[i]- '0';
  }
  printf("%d", sum);
}