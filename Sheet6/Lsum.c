#include<stdio.h>
long long summation(int n, int a[]){
    int sum =0;
    if(n==0){
        return 0;
    }
    return a[n-1]+ summation(n-1,a);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    
    
    printf("%lld\n",summation(n,a));
}