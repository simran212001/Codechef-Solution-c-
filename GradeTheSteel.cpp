#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        float H , C,T;
        cin>>H>>C>>T;
        if(H>50 && C<0.7 && T>5600)
        {
            cout<<"10"<<endl;
        }
        else if(H>50 && C<0.7 && T<=5600)
        {
            cout<<"9"<<endl;
        }
        else if(H<=50 && C<0.7 && T>5600)
        {
            cout<<"8"<<endl;
        }
        else if(H>50 && C>=0.7 && T>5600)
        {
            cout<<"7"<<endl;
        }
        else if(H>50 || C<0.7 || T>5600)
        {
            cout<<"6"<<endl;
        }
        else{
            cout<<"5"<<endl;
        }
    }
    return 0;
    
}
