#include<stdio.h>

int vowels(char s[], int i){
    int count = 0;
    if(s[i]== '\0'){
        return 0;
    }
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            count =1;
          }  

    return count + vowels(s,i+1);  
}
int main(){
    char s[200];
    fflush(stdin);
    gets(s); 
    
    int numbvowels = vowels(s,0);
    printf("%d\n", numbvowels);
}