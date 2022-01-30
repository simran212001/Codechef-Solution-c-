#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        long long int n;
        cin>>n;
        long long int arr;
        long long min = 1000000;
        for(int i=0;i<n;i++){
            cin>>arr;
            if(min>=arr){
                min = arr;
            }
        }
        cout<<min*(n-1)
        
    }
    return 0;
}