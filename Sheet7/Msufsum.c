#include<stdio.h>
long long suffixsum(int n, int m, int a[]){
    int sum =0;
    if(m==0){
        return 0;
    }
    return a[n-1] + suffixsum(n-1,m-1,a);
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

   printf("%lld\n",suffixsum(n,m,a));

    return 0;
}