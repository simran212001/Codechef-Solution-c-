#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int N,k;
        vector <int> arr(N);
        cin>>N>>k;
        for(int i=0;i<N;i++){
            cin>>arr[i];
            if(arr[i]<=k){
                k=k-arr[i];
                cout<<"1";
            }
            else{
                k=k; 
                cout<<"0";
            }
        }
    }
    return 0;
}