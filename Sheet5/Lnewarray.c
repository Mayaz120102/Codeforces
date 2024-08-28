#include<stdio.h>
void newarray(int n, int a[100001],int b[100001],int c[100001]){
  for (int i=0; i<n; i++)
    {
        c[i]= b[i];
        c[n+i] = a[i];
    }
    
    for (int i=0; i<2*n; i++)
    {
       printf("%d ",c[i]);
    }
    printf("\n");
}

int main()
{   
    int n;
    int a[100001],b[100001];
    int c[100001];

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d",&b[i]);
    }

   newarray(n,a,b,c);
  return 0;
}