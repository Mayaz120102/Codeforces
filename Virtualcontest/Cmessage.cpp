#include<iostream>
#include<string>
using namespace std;
int main()
{
    string t;
    cin>>t;
    int len = t.length();
    for(int i=1; i<len/2+1;i++){
        
            string f =t.substr(0,len-i);
            string s =t.substr(i,len-i);
            if(f==s){
              if(f.length()>0 && f.length()<len){
               cout<<"YES"<<endl;
               cout<<f<<endl;
               return 0;
              }
            }  
        }
    
    cout<<"NO"<<endl;
    return 0;

}
