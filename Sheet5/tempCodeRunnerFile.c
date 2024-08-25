#include<stdio.h>
void printnumbers(int a){
    for(int i=1;i<=a;i++){
        printf("%d ",i);
    }
    printf("\n");
}
int main(){
   int n;
   scanf("%d", &n);
   printnumbers(n);
}

