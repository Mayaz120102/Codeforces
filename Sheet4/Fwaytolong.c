#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    getchar();
    char s[t][100];
    for(i=0; i<t; i++){
        scanf("%s", &s[i]);
    }
      
    for(i=0; i<t; i++){
        int len= strlen(s[i]);
        strlwr(s[i]);
        if(len>10){
        printf("%c%d%c\n", s[i][0],len-2,s[i][len-1]);
        }
        else{
          printf("%s\n", s[i]);
        }
    }
    return 0;
}