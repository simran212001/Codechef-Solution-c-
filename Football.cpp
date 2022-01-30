#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int N;
        int Max =0;
        cin>>N;
        vector<int> score(N);
        for (int i=0;i<N;i++){
            int a;
            cin>>a;
            score[i] = a*20;
        }
        for (int i=0;i<N;i++){
            int b;
            cin>>b;
            score[i] = score[i]-b*10;
        }
        for(int x:score){
            Max = max(Max,x);
        }
        cout<<Max<<endl;
    }
    return 0;
}