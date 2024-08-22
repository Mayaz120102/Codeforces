#include<stdio.h>
#include<string.h>
int main()
{
  char a[30], b[30];
  int len1 ,len2;
  scanf("%s %s", a,b);
  len1 = strlen(a);
  len2 = strlen(b);
  printf("%d %d\n", len1,len2);
  
  char temp2[30];
  strcpy(temp2,a);
  strcat(temp2,b);
  printf("%s\n",temp2);
  
  char temp1 = a[0];
  a[0]=b[0];
  b[0]=temp1;
  
  printf("%s %s\n", a,b);


}