#include<stdio.h>
void binrec(int n){
    if(n>1){
       binrec(n/2);
    }
 printf("%d",n%2);
 }

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
      //  printf("%d\n",n);

      //conv n to bin

      if(n==0)
      {
        printf("0\n");
      }
      else{
       binrec(n);
        printf("\n");
      }
    }
     return 0;  
}