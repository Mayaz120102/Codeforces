#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,x,i;
  int a[100];

  //taking input for N
  printf("Enter the number of N: ");
  scanf("%d", &n);
  //taking input for the elements of A
  printf("Enter the Eliments: ");
  for(i=0; i<n; i++){
    scanf("%d", &a[i]);
  }

  for(i=0; i<n; i++){
    printf("%d ", a[i]);
  }
  //input the value of X
  printf("\ninput the number you want to search in the array: ");
  scanf("%d", &x);

  //linear searching algorithm
  int pos =-1;
  for(i=0; i<n; i++){
    if(x==a[i]){
     pos =i;
     break;
    }
  }
  // if(pos==-1){
  //   printf("-1");
  // }
  // else{
    printf("%d",pos);
 // }



}