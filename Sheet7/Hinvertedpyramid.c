#include<stdio.h>
#include<string.h>

void invertpyramid(int n,int i){
    if(i<=0){
        return;
    }
    //printing spaces
    for(int j=0;j<n-i;j++){
        printf(" ");
        }
    //printing stars
    for (int j = 0; j < 2*i-1; j++)
      {
        printf("*");
      }
      printf("\n");
      invertpyramid(n,i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    invertpyramid(n,n);
    return 0;
}