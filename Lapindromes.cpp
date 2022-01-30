#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        string s;
        cin>>s;
        int N = s.length();
        if(N%2==0){
            string s1 =s.substr(0,N/2);
            string s2 = s.substr(N/2,N);
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        if(N%2!=0){
            string s1 =s.substr(0,N/2);
            string s2 = s.substr(N/2+1,N);
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    } 
    return 0;
}