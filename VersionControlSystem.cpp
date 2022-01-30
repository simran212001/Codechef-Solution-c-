#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n,m,k;
        int counttrackedignored=0,countuntrackedunignored=0;
        cin>>n>>m>>k;
        int a[m];
        int b[k];
        int A[n];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<k;j++){
                if(a[i]==b[j]){
                    counttrackedignored ++;
                }
            }
        }
        // cout<<counttrackedignored<<" ";

        int y=n-m , z=n-k;
        int a_[y] , b_[z];
        for(int x=1;x<=n;x++){
            A[x] =x;
            cout<<A[x]<<" ";
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                if(A[i]!=a[j]){
                    a_[i] = A[i];
                }
            }
            for(int j=0;j<k;j++){

                if(A[i]!=b[i]){
                    b_[i] = A[i];
                }
            }
            for(int i=0;i<(n-m);i++){
                for(int j=0;j<(n-k);j++){
                    if(a_[i]==b_[j]){
                        countuntrackedunignored ++;
                    }
            }
            for(int i=0;i<(n-m);i++){
                cout<<a_[i];
            }
        }
        }
        // cout<<countuntrackedunignored;
    }
    return 0;
}