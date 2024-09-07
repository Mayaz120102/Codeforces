#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x,p;
    cin>>x>>p;

    float regularPrice = (p*100.0)/(100-x);
    cout<<fixed<<setprecision(2)<< regularPrice<<endl;
}