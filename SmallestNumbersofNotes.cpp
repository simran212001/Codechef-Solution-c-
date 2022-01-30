#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n,sum=0;
        cin>>n;
        vector <int> coins = {100,50,10,5,2,1};
        for(auto c:coins){
            cout<<"n/c"<<n/c<<endl;
            sum = sum+n/c;
            n = n%c;             //remainder
        }
        cout<<sum<<endl;
    }
    return 0;
}