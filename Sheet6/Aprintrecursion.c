#include<stdio.h>
void recusion(int n){
    if(n>0)
   {
     printf("I love Recursion\n");
     recusion(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    recusion(n);
    return 0;
    
}