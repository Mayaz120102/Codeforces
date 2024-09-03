#include<stdio.h>
int findFibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
     
     return findFibonacci(n-1)+ findFibonacci(n-2);

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",findFibonacci(n));

    return 0;
}