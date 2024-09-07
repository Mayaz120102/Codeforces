#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        int alt_sum =0;
        int c_num;

        for(int i=0;i<n;i++){
            cin>>c_num;
            if(i%2==0){
                alt_sum+= c_num;
            }
            else{
                alt_sum-=c_num;
            }
        }
        cout<<alt_sum<<endl;
    }
    return 0;
}