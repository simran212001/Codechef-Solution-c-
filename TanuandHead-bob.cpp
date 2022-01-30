#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n;      //Number of gesture recorded
        cin>>n;
        string s;
        cin>>s;
        int I=0, Y=0 ,N=0; 
        for(int i=0;i<n;i++){
            if(s[i] == 'I'){
                I++;
            }
            else if(s[i]=='Y'){
                Y++;
            }
            else{
                N++;
            }
        }
        if(I>0 && Y==0){
            cout<<"INDIAN"<<endl;
        }
        else if(Y>0 && I==0){
            cout<<"NOT INDIAN"<<endl;
        }
        else{
            cout<<"NOT SURE"<<endl;
        }
    }
    return 0;
}