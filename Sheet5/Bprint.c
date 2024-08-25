#include<stdio.h>
void printnumbers(int a){
    for(int i=1;i<=a;i++){
        if (i > 1) {
            printf(" "); // Print a space before each number except the first
        }
        printf("%d",i);
    }
    printf("\n");
}
int main(){
   int n;
   scanf("%d", &n);
   printnumbers(n);
   return 0;
}

