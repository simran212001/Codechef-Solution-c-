#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s;
    int lucky =0,unlucky=0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s%2==0)
        {
            lucky+=1;
        }
        else{
            unlucky+=1;
        }
    }
    if(lucky>unlucky){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }
    return 0;
}