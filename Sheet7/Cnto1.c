#include<stdio.h>
void numbers(int n){
    if(n>0){
        printf("%d",n);
        if(n>1){
            printf(" ");
        }
        numbers(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    numbers(n);

    return 0;

}