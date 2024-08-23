#include<stdio.h>
#include<string.h>
int main()
{
  char s[1000];
  scanf("%s",s);
  int len = strlen(s);
  int ispalindrome = 1;
  for(int i=0; i<len/2; i++){
    if(s[i]!= s[len-i-1]){
        ispalindrome = 0;
        break;
    }
  }
  if(ispalindrome){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;

}