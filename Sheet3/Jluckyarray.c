#include<stdio.h>
int main()
{
 int n,i,j;
 scanf("%d", &n);
 int a[n];
 for(i=0; i<n; i++){
    scanf("%d", &a[i]);
 }
   int min_el =a[0];
   int min_c = 1;

   for(i=1; i<n; i++){
    if(a[i]<min_el){
        min_el = a[i];
        min_c =1;
    }else if(a[i]== min_el){
        min_c++;
    }
   }
  if(min_c%2==1){
    printf("lucky\n");
  }
  else {
    printf("unlucky\n");
  }

}