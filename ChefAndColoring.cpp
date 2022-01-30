#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int N;
        cin>>N;
        string x;
        cin>>x;
        int R=0,G=0,B=0,res =0;
        for(int i=0;i<x.size();i++){

            if(x[i]=='R'){
                R++;
            }
            else if(x[i]=='G'){
                G++;
            }
            else{
                B++;
            }
        }
        res = max(R,G);
        res = max(res,B);
        cout<<(N-res)<<endl;
    }
    return 0;
}