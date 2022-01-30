#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int N;
        cin>>N;
        int count = 0;
        if(N%10==0){
            cout<<count;
        }
        else if(N*2 %10==0){
            cout<<"1";
        }
        else{
            cout<<"-1";
        }
    }
    return 0;
    
}