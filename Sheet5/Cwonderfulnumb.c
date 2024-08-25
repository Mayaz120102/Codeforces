#include<stdio.h>
int isOdd(int a){
 return a%2!=0;
}
int isBinPalindrome(int a){
    if(a==0)
    return 1;

    char bin[32];
    int j =0;

    //converting to binary

    while(a>0){
        bin[j++]= (a%2)+ '0';
        a/= 2;
    }

    for(int i=0; i<j;i++){
        if(bin[i]!=bin[j-i-1]){
            return 0;
        }
    }
   return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    if(isOdd(n) && isBinPalindrome(n)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}