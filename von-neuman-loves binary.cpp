#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	long int num;
	while(n>0){
		cin>>num;
		int ans=0;
		int fc=1;
		for(;num>0;num=num/10,fc=fc*2){
			int a=(num%10);
			ans=ans+(a*fc);
			
		}
		cout<<ans<<endl;
		n--;
	}
	return 0;
}
