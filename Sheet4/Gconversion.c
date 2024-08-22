#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
  char s[100000];
  scanf("%s",s);

   for(int i=0; i< strlen(s); i++){
    if(s[i]==','){
        s[i]=' ';
    }
   }
for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        } else if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }

   printf("%s\n",s);

}