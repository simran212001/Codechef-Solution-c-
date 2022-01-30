#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int b;
        cin>>b;
        int l= b-2;
        l = floor(l/2);            //bcs we have two sides and here i am counting for one side
        // When we se the number of squares its an srithmetic progression 
        // sum of AP = n(n+1)/2 
        cout<<"Squares"<<l*(l+1)/2<<endl;
    }
    
}