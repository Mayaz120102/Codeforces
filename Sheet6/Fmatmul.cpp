#include<iostream>
using namespace std;
int main()
{
    int r1,c1;
    cin>>r1>>c1;

    int a[100][100];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    int r2,c2;
    cin>>r2>>c2;

   int  b[100][100],m[100][100];

    
    
     for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
   
   int sum =0;
   for(int i=0; i<r1;i++){
    for(int j=0; j<c1;j++){
        for(int k=0;k<c1;k++){
            sum = sum +a[i][k]*b[k][j];
        }

        m[i][j] =sum;
        sum =0;
    }
   }

   for(int i =0;i<r1;i++){
    for(int j=0;j<c2;j++){
        cout<<m[i][j]<<" ";    
   }
   cout<<endl;
   }
     return 0;
}