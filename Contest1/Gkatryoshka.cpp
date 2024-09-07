#include<iostream>
using namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    
    long long kat = min(n,min(m,k));
    n-=kat;
    m-=kat;
    k-=kat;

    long long katplus =min(n/2,k);
    kat+= katplus;

    cout<<kat<<endl;
    return 0;

}