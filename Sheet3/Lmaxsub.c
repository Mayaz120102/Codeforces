#include<stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while(t--){
    int n,i,j;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n; i++){
        int max =a[i];
        printf("%d ",max);
        for(int j=i+1; j<n; j++){
         max= (max > a[j]) ? max : a[j];
         printf("%d ", max);
        }
    }
           printf("\n"); 
  }

}