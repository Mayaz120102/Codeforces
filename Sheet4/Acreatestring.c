#include<stdio.h>
#include<string.h>
int main()
{
    char s[30], t[30];
    scanf("%s" ,&s);
    scanf("%s" , &t);
    int len1 = strlen(s);
    int len2 = strlen(t);
    printf("%d %d", len1,len2);
    printf("\n%s %s" ,s,t);
}