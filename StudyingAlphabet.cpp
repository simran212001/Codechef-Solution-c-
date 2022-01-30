#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    while (n--)
    {
        string s1;
        cin>>s1;
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s1.size();j++){
                if(s[i]==s1[j]){
                    count++;
                }
            }
        }
        if(count>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}