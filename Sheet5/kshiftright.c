#include<stdio.h>
void shift(int n, int x,int a[100001]){
    //normize the number fo shifts
    x=x%n;

    for(int i=0; i<n;i++){
    printf("%d ",a[(n-x+i)%n]);
    }
    printf("\n");
 }


int main()
{
   int n,x;
   scanf("%d %d", &n,&x);
   int a[100001];

   for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
   }
  //normize the number fo shifts

    shift(n,x,a);

    return 0;

}