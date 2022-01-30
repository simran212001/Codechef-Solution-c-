#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int N;
        cin>>N;
        while (N>0){
            int rev_num = 0;
            rev_num = rev_num*10 + N%10;
            N = N/10;
        }
    }
    return 0;
}

// int Reverse(int N){

// }