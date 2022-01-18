#include<iostream>
using namespace std;
int main() {
	long int n;
	cin>>n;
	long int ans=0;
    while(n>0){
     int a=n%10;
	 ans=(ans*10)+a;
	 n/=10;
	}
	cout<<ans;
	return 0;
}
