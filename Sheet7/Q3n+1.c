#include<stdio.h>
int lenght(int n){
    if(n==1){
        return 1;
    }
    if(n%2!=0){
        return 1 + lenght(3*n +1);
    }
    else {
        return 1 + lenght(n/2);
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int len = lenght(n);

    printf("%d",len);

    return 0;
}