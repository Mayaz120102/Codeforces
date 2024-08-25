#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp= *x;
    *x=*y;
    *y= temp;
}

int main() {
    int a,b,temp;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}