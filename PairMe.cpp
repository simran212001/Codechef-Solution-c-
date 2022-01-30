#include <iostream>
using namespace std;

int main() {
	int T = 5;
    cin>>T;
	while(T--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x+y==z || y+z==x || z+x==y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}
