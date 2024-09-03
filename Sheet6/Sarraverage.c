#include<stdio.h>
long long recursiveSum(int a[], int n){
    if(n==0){
        return 0;
    }
    
        return a[n-1]+ recursiveSum(a,n-1);
}

int main(){
    int n;
    scanf("%d",&n);

    int a[1009];

    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    long long sum = recursiveSum(a,n);
    
    
    double average =(double)sum/n;

     printf("%.6lf\n",average);
    
}