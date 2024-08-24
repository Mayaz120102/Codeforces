#include<stdio.h>
#include<string.h>
#define a_s 26
int main()
{
 char s[1000001];
 scanf("%s",s);
 int count[a_s]={0};
  int i=0;
  while(s[i]!='\0'){
    if(s[i]>=97 && s[i]<=122)
    count[s[i]-'a']++;
    i++;
  }

  for(i=0;i<a_s;i++){
    if(count[i]>0){
       printf("%c : %d\n",'a'+i,count[i]);
    }
  }
  return 0;
}