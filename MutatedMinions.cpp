#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n,k,m;
        cin>>n>>k;
        int count=0;
        for(int i=0;i<n;i++){
            cin>>m;
            if((m+k)%7==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}