#include<stdio.h>
#include<string.h>
int main(){

 char s[1000001];
 scanf("%s",s);
 int i=0;
 int sum=0;
 while(s[i]!='\0'){
    if(s[i]=='\\'){
        break;
    }
     sum =sum +( s[i]-'0');
    i++;
    }

 printf("%d\n", sum);
 return 0;
}