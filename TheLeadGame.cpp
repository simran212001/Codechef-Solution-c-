#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i,m=0,n=0,d1=0,d2=0,lead1=0,lead2=0,p1,p2;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>p1>>p2;
        m=m+p1;
        n=n+p2;
        if (m>=n)
        {
	        d1=m-n;
        }
        if (m<n)
        {
            d2=n-m;
        }
        if (d1>lead1)
        {
            lead1=d1;
        }
        if (d2>lead2)
        {
            lead2=d2;
        }
    }
    if (lead1>lead2)
	    cout<<"1"<<" "<<lead1;
    if (lead2>lead1)
	    cout<<"2"<<" "<<lead2;
    return 0;
}
