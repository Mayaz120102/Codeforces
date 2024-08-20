#include<stdio.h>
#include<stdbool.h>
int main()
{

  int n, i,k;
  scanf("%d", &n);
  int a[n];
  for(i=0; i<n; i++){
    scanf("%d", &a[i]);
  }

  bool is_palindrome = true;
  for(i=0; i<n/2; i++){
    if(a[i]!=a[(n-1)-i]){
      is_palindrome= false;
      break;

    }
  }

  if(is_palindrome){
     printf("yes\n");
  }
   else{
    printf("No\n");
   }

   return 0;

}