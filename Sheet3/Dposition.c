#include<stdio.h>
int main(){
  int n,i;
  int a[100];
  scanf("%d",&n);
  for(i=0; i<n; i++){
   scanf("%d",&a[i]);
  }
    //int pos= -1;
    for(i=0; i<n; i++){
       // pos = i+1;
       if(a[i]<=10){
       printf("a[%d]= %d\n",i,a[i]);
    }
    
  }
}