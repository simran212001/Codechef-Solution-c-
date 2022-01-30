#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    // Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.
    vector <int> arr(T);
    for (int i=0;i<T;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    // for(int j=0;j<arr.size();j++)
    // {
    //     cout<<arr[j]<<endl;
    // }
    for(int x : arr)
	    cout<<x<<endl;
    return 0;
}