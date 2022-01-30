#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];

        }
        sort(arr, arr+N, greater<int>());
        cout<<arr[N-2]+arr[N-1]<<endl;
    }
    return 0;
}