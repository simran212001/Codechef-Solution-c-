#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int A,B,l;
        cin>>A>>B;
        int sum=A+B;
        int s=0;
        while (sum>0)
        {
            l = sum%10;
            if(l==2 || l==3 || l==5){
                l=5;
            }
            else if(l==0 || l==6 || l==9){
                l=6;
            }
            else if(l==1){
                l=2;
            }
            else if(l==4){
                l=4;
            }
            else if(l==7){
                l=3;
            }
            else if(l==8){
                l=7;
            }
            sum = sum/10;
            s=s +l;
        }
        cout<<s<<endl;

    }
    return 0;
}