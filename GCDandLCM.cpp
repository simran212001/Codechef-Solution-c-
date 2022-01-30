#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int A,B;
        cin>>A>>B;
        cout<<__gcd(A,B)<<" "<<(A*B)/(__gcd(A,B))<<endl;
    }
    return 0;
}