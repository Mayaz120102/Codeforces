#include<stdio.h>

void shiftzero(int n, int a[1001]){
  
 //nonzero
  int n_zero = 0;
  for(int i=0; i<n; i++){
    if(a[i]!=0){
        a[n_zero] = a[i];
        n_zero++;
    }
  }
 //fill remaining pos with 0
  for(int i= n_zero; i<n; i++){
    a[i] =0;
  }
 for(int i =0; i<n; i++){
  printf("%d ",a[i]);
 }

 printf("\n");

}

int main(){
    int n;
    scanf("%d", &n);

    int a[1001];

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
  
 shiftzero(n,a);

 return 0;
}
