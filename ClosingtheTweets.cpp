#include <iostream>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    int s;
    string c = "CLICK";
    while (K--)
    {
        cin>>s;
        if(s[0] == c){
            cout<<s[1]<<endl;
        }
    }
    
    return 0;
}