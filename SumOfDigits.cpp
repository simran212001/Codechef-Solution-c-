#include <iostream>
using namespace std;
int SumofDigits(int n){
    int sum =0;
    while(n>0){
        sum = sum + n%10;
        n = n/10;
    }
    return sum;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<SumofDigits(n)<<endl;
    }
    return 0;
}