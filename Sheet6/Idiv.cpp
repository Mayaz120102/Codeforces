#include<iostream>
using namespace std;

int main()
{
    long long a,b,x;
    cin>>a>>b>>x;
    
    if(a>b){
        swap(a,b);
    }

    long long firstDiv = a+(x-a%x)%x;
    long long lastDiv = b-(b%x);

    if(firstDiv>b){
        cout<<0<<endl;
    }
    else{
        long long numberTerms = ((lastDiv-firstDiv)/x)+1;

        long long sum = (numberTerms*(firstDiv+lastDiv))/2;

        cout<< sum <<endl;
    }
    return 0;
}