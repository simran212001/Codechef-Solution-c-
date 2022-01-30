#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int N , D;
        int sum=0;
        cin>>D>>N;
        while (D--)
        {
            sum=0;              
            for(int i=1;i<=N;i++){
                sum = sum+i;
            }
            N = sum;
        }
        cout<<sum<<endl;
        
    }
    return 0;
}