#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        long long int N,B,M,time=0;
        cin>>N>>B>>M;
    
        while (N>1)
        {   
            if(N%2==0){
                // N = N/2;
                time = time + (N/2)*M + B;
                M = M*2;
                N = N - ( N/2);
            }
            else{
                // N = (N+1)/2;
                time = time + ((N+1)/2)*M + B;
                M=M*2;
                N = N-((N+1)/2);
            }
        }
        cout<<(time+M)<<endl;
        
    }
    return 0;
}