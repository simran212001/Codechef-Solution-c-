#include <iostream>
using namespace std;
int lastDigit(int n){
    while(n>=10){
        n = n/10;
    }
    return n;
}
int firstDigit(int n){
    n = n%10;
    return n;
}
int Sum(int n){
    int sum = 0;
    sum = firstDigit(n) + lastDigit(n);
    return sum;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<Sum(n)<<endl;
    }
    return 0;
}