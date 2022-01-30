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
        int one =0, zero=0;  
        for (int i=0 ; i<s.size();i++)      
        {
            if(s[i]=='0'){
                zero++;
            }
            if(s[i]=='1'){
                one++;
            }
        }
        if(min(zero,one)==1 || s.size()==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}