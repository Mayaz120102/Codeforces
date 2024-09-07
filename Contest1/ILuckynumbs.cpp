#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n<10 || n>99){
         return 1;
    }
    

    int l = n/10;
    int f = n%10;

    bool found = false;
    if(f!=0 && l%f==0)
    {
        found = true;
    }

    if(l!=0 && f%l==0){
        found = true;
    }

    if(found){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}