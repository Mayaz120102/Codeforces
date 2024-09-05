#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    if(a>b){
        swap(a,b);
    }
    long long sum =(b-a+1)*(a+b)/2;
    long long evenf =(a%2==0) ? a:a+1;
    long long n =(b-evenf+2)/2;
    long long even = n*(2*evenf+(n-1)*2)/2;

    cout<<sum<<endl;
    cout<<even<<endl;
    cout<<sum-even<<endl;
    
    return 0;
}