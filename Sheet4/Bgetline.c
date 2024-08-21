#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    int i=0;
    fgets(s, sizeof(s), stdin);
    
    while(s[i]!='\0'){
        if(s[i]=='\\'){
            break;
        }
      printf("%c",s[i]);
      i++;
    }
    printf("\n");
   return 0;
}