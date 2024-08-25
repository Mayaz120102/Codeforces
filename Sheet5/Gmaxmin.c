#include<stdio.h>

int maximum(int b[], int n){
    int max= b[0];
    for(int i=0;i<n;i++){
    if(b[i]>max){
       max= b[i];
    }
    }
return max;
}
int minimum(int b[], int n){
 int min =b[0];
  for(int i=0;i<n;i++){
   if(b[i]<min){
    min =b[i];
   }
  }
  return min;

}
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int minimumvalue = minimum(a,n);
    int maximumvalue = maximum(a,n);
    printf("%d %d\n",minimumvalue, maximumvalue);
  
   return 0;
}