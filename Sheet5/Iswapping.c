#include<stdio.h>

void rowswap(int n, int a[500][500], int x, int y){
 //swapping the rows
    for(int j=0; j<n;j++){
        int temp = a[x][j];
        a[x][j] = a[y][j];
        a[y][j] = temp;
    }
}
 void coloumnswap(int n, int a[500][500], int x, int y){

//swapping the column

   for(int i=0; i<n; i++){
      int temp = a[i][x];
      a[i][x] = a[i][y];
      a[i][y] = temp;
   }
 } 

int main(){
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    int a[500][500];

    //taking elements for mat a
  
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
        // Convert 1-based index to 0-based for array access
     x--;
     y--;

   rowswap(n,a,x,y);
   coloumnswap(n,a,x,y);
   
   
 //printing swapping mat
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
   }
  return 0;

}