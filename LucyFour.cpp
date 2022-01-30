#include <iostream>
using namespace std;
int LuckyFour(int n){
    int count=0;
    while(n>0){
        if(n%10==4){
            count+=1;
            n=n/10;
        }
        else{
            n=n/10;
        }
    }
    return count;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>> n;
        cout<<LuckyFour(n)<<endl;
    }
    return 0;
}