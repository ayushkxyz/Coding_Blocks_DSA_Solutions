#include<iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;

	int ans=0;
	int fc=1;
	for(;n>0;n=n/10,fc=fc*2){
		if(n%10==1){
			ans=ans+(fc);
		}
	}
	cout<<ans;
	return 0;
}
