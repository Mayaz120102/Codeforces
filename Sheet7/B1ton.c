#include<stdio.h>
void numbers(int n, int x){
    if(n>=x)
   {
    printf("%d\n",x);
    numbers(n,x+1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    numbers(n,1);
    return 0;
    
}