#include<stdio.h>
void evenindex(int n,int index, int a[]){
    if(index>=n){
        return;
    }
    
    evenindex(n,index+2,a);
    printf("%d ",a[index]);

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    evenindex(n,0,a);
    printf("\n");

    return 0;
}