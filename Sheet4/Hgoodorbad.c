#include<stdio.h>
#include<string.h>
int main()
{
   int t;
   scanf("%d", &t);
   
   while(t--){
    char s[1000001];
    scanf("%s", s);

    int len = strlen(s);
    int isgood= 0;
    
    for(int i=0; i<len-1; i++){
        if((s[i]== '0' && s[i+1]== '1' && s[i+2] == '0') ||(s[i]=='1' && s[i+1] == '0' && s[i+2] == '1')){
            isgood =1;
            break;
        }
    }
   
   if(isgood){
    printf("Good\n");
   }
   else{
    printf("Bad\n");
   }
   }
   

}