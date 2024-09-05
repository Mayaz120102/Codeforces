#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n;
    cin>>n;

    if(n==1){
        cout<<"NO\n";
        return 0;
    }
    
    for(int i= sqrt(n); i>=2;i--){
        if(n%i==0){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";

    return 0;
}