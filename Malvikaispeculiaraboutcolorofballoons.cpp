#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        string s;
        cin>>s;
        int a =0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                a++;
            }
            else if(s[i]=='b'){
                b++;
            }
        }
        if(a<=b){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    return 0;
}