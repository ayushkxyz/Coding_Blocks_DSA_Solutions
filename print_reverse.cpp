#include<iostream>
using namespace std;

int main() {
	long long int n;
	long long int ans=0;
	cin>>n;
 
	for(;n>0;n=n/10){
      int a=n%10;
	  ans=(ans*10)+a;
	}
	cout<<ans;
	return 0;
}
