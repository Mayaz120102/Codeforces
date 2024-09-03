#include<stdio.h>
int isPalindrome(int a[], int i, int n){
    if(i>=n){
        return 1;
    }

    if(a[i]!=a[n]){
       return 0;
    }

    return isPalindrome(a,i+1,n-1);
}
int main(){
    int n;
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
   
    

   if(isPalindrome(a,0,n-1)){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }

  return 0;

}