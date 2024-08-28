#include<stdio.h>

void distinctnumbers(int n, int a[1001]){
    int d_n;
     int count =0;

 for(int i=0; i<n;i++){
    d_n = 1;
      for(int j=0;j<i;j++){
        if(a[i]== a[j]){
            d_n =0;
            break;
        }
     }
     if(d_n){
        count++;
     }
  }
  printf("%d\n",count);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[1001];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
  
  //distinct part

  distinctnumbers(n,a);
  

}