#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        //we have to choose the packet size 
        cout<<(n/2+1)<<endl;
    }
    return 0;
}