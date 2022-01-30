#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
            int n , rem =0, a;
            cin>>n;
            a = n;
            while(a>0){
                rem = rem*10 + a%10;
                a = a/10;
            }
            if(rem == n){
                cout<<"wins"<<endl;
            }else{
                cout<<"loses"<<endl;
           }
    }
    return 0;
}