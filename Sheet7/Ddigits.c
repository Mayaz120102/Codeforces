#include<stdio.h>
void digits(int n){
  if(n<10){
    printf("%d",n);
  }
  else {
    digits(n/10);
    printf(" %d",n%10);
  }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
         
        digits(n);
        printf("\n");
    } 
}