#include<stdio.h>
void n_times(int n, char c){
for(int i=0; i<n;i++){
        printf("%c ",c);
        if(i<n-1){
            printf(" ");
        }
} 
  printf("\n");
}
 int main()
{
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    char c;
    scanf("%d %c",&n,&c);
    n_times(n,c);
    
    }
    
  }


