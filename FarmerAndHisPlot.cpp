#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int N,M;
        int res=0;
        cin>>N>>M;
        if(N%2==0){
            N = N/2;
            res = res + M/N;
            res = 2*res;
        }
        else{
            res = res+M/N;
        }
        cout<<res<<endl;
    }
    return 0;
}