#include<bits/stdc++.h>

using namespace std;

int main() {
    int x,y; char ch;
    cin>>x;
    cin>>y;
    cin>>ch;
    cout<<fixed<<setprecision(6)<<endl;
    switch(ch){
        case('/'):cout<<static_cast<long double>(x)/y<<endl; break;
        case('*'):cout<<x*y<<endl; break;
        case('-'):cout<<x-y<<endl; break;
        case('+'):cout<<x+y<<endl; break;
        default: break;
    }
    return 0;
}