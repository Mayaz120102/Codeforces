#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100],s2[100];
  //printf("enter the strings: ");
  scanf("%s %s",s1,s2);
 
  if(strcmp(s1,s2)<0){
    printf("%s\n", s1);
  }
  else{
    printf("%s\n", s2);
  }
   return 0;
}