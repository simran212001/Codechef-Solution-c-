#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n; 
        cin>>n;
        // N = (H*H +H)/2;
        // H = (-1+sqrt(1+8n))/2
        int N = 1+8*n;
        float a = sqrt(N);
        int H = (-1+a)/2;
        cout<<H<<endl;
    }

    return 0;
}