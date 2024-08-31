#include<stdio.h>
void pyramid(int n,int i){
    if(i>n){
        return;
    }
    //printing spaces
    if(n-i>0){
    for(int j=0;j<n-i;j++){
        printf(" ");
        }
    }
    //printing stars
    for (int j = 0; j < 2*i-1; j++)
      {
        printf("*");
      }
      printf("\n");
      pyramid(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    pyramid(n,1);
    return 0;
}