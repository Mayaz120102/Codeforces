#include<stdio.h>
int maximum(int n, int a[],int max,int i){
if(i==n){
    return max;
}
if(a[i]>max){
        max = a[i];
}
return maximum(n,a,max,i+1);

}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("%d\n",maximum(n,a,a[0],0));
    return 0;
}