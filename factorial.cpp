
#include <bits/stdc++.h>
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;

int main() {
	// your code goes here
	int T ;
	cin>>T;
	while(T--)
	{
	int n;
	cin>>n;
	cpp_int count = 1;
	for(int i = 1; i<=n; i++)
	{
	       count = count *i;
	       
	}
	cout <<count<<endl;
}
}



