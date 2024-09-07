#include<iostream>
#include<limits>
using namespace std;
int main(){
    long long n,k,a;
    cin>>n>>k>>a;

    double eqn =static_cast<double>(n)*k/a;
    if(eqn<=numeric_limits<int>::max() && eqn == static_cast<int>(eqn)){cout<<"int"<<endl;}
    else if(eqn<=numeric_limits<long long>::max() && eqn == static_cast<long long>(eqn)){cout<<"long long"<<endl;}
    else {cout<<"double"<<endl;}
    
    return 0;
    }