#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int Q;
        float Price;
        cin>>Q>>Price;
        if(Q>1000)
        {
            Price = Price - 0.10*Price;
        }
        else{
            Price = Price;
        }
        cout<< fixed << setprecision(6) << float(Q*Price)<<endl ;
        
    }
    return 0;
}