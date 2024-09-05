#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n;
    std::cin>>n;

    long long sum =0;
    for(long long i=1;i <= sqrt(n);i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i){
                sum+=n/i;
            }
        }
    }
    std::cout<<sum<<endl;
    return 0;
}