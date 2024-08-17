#include<stdio.h>
int main(){
  int n,i;
  int a[100];
  scanf("%d",&n);
  for(i=0; i<n; i++){
   scanf("%d",&a[i]);
  }
  for(i=0; i<n; i++){
    if(a[i]<0){
       printf("2 ");
    }
   else if(a[i]>0){
        printf("1 ");
    }
    else
      printf("0 ");
  }

}