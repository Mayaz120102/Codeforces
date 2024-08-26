#include<stdio.h>
double summation(double a[10001],int n){
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum +a[i];
    }
    return sum;
}

int main(){
    int n;
    double a[10001];
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        scanf("%lf" ,&a[i]);
    }
   
   double sum = summation(a,n);
   double avg = sum/n;
   
  
   printf("%.7lf",avg);
    

}