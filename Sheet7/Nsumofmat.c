#include<stdio.h>
void matrixsum(int a[][100], int b[][100], int s[][100], int r, int c, int i, int j ){
 if(i>=r){
        return;
    }
 if(j>=c){
    matrixsum(a,b,s,r,c,i+1,0);
    return;
 }

 s[i][j]=a[i][j] + b[i][j];

 matrixsum(a,b,s,r,c,i,j+1);

}
int main(){
    int r,c;
    scanf("%d %d",&r,&c);

    int a[100][100], b[100][100], s[100][100];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }

   matrixsum(a,b,s,r,c,0,0);
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          printf("%d ",s[i][j]) ;
        }
        printf("\n");
    }



}