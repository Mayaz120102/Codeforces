#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    
    bool first = true;

    int count =0;
    while(n%2==0){
        n/=2;
        count++;
    }
    
    if(count>0){
        if(first){
            first = false;
        }else {
            cout<< "*";
        }
        cout<< "(2^" << count << ")";
    }

    for(int i=3; i<= sqrt(n); i+=2){
        count =0;
        while(n%i ==0){
            n/=i;
            count++;
        }
        if(count>0){
            if(first){
                first =false;
            }
            else{
                cout<<"*";
            }
            cout<<"("<<i<<"^"<<count<<")";
        }
    }
    if(n>1){
        if(!first){
            cout<< "*";
        }
        cout<<"("<<n<<"^1)";
    }
    return 0;
}