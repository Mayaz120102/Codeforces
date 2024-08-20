#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int i,j,n;
    while(t--){
    scanf("%d",&n);

    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int sum, s_sum;
    for(i=0;i<n;i++){
        for(j=i+1; j<n; j++){
             sum = a[i]+ a[j] +j-i;
             if(sum<s_sum){
                s_sum = sum;
             }
        }
    }
 
  printf("%d\n", s_sum);
}
}