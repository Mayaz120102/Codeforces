#include<stdio.h>
#include<string.h>
int main(){
  int N;
  scanf("%d", &N);
  
  while(N--){
  char str1[51], str2[51];
  scanf("%s %s", str1, str2);

  int lenS = strlen(str1);
  int lenT = strlen(str2);
  int i=0; int j =0;

  //its combine the strings alternately
  while(i<lenS || j<lenT){
    if(i<lenS){
      printf("%c",str1[i]);
      i++;
    }
    if(j<lenT){
      printf("%c",str2[j]);
      j++;
    }
  }
   printf("\n");
  
}


}