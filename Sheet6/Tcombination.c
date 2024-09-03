#include<stdio.h>
int combination(int n,int r){
    if(r==0 || r==n){
        return 1;
    }
  
  return combination(n-1,r-1) + combination(n-1,r);

}
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    if(r>n){
        printf("0");
    }
    else{
    printf("%d\n",combination(n,r));
    }
    return 0;
}