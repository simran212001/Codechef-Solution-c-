#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	
    int T;
    cin>>T;
    while (T--)
    {
        float N,V1,V2;
        cin>>N >> V1>> V2;
        float t_s =N*sqrt(2)/V1;
        float t_e = 2*N/V2;
        if(t_e < t_s){
            cout<<"Elevator"<<endl;
        }
        else{
            cout<<"Stairs"<<endl;
        }
    }
    return 0;
}