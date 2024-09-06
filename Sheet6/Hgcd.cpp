#include<iostream>
using namespace std;

long long gcd(long long a, long long b){
    while(b!=0){
        long long temp = b;
        b= a%b;
        a=temp;
    }
    return a;
}

long long lcm(long long a,long long b, long long gcdval){
    return(a/gcdval)*b;
}
int main()
{
   long long a, b;
   cin>>a>>b;

   long long gcdR = gcd(a,b);

   long long lcmR= lcm(a,b,gcdR);
   cout<<gcdR<<" "<<lcmR<<endl;


} 

