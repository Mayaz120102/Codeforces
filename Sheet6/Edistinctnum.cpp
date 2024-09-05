#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long  n;
    std::cin>>n;

    long long k = static_cast<long long>((-1 + std::sqrt(1+8*n))/2);

    while(k*(k+1)/2>n){
        --k;
    }
   std::cout<<k<<std::endl;

}