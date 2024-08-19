#include<stdio.h>
int main(){
  int n,i;
  int a[100000];
  scanf("%d",&n);
  for(i=0; i<n; i++){
   scanf("%d",&a[i]);
  }
  int min = a[0], pos=1;;
  for(i=0; i<n; i++){
    if(a[i]<min){
        min = a[i];
        pos= i+1;
    }
  }
   printf("%d %d\n", min, pos);
}