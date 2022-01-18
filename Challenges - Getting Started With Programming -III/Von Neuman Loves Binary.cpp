#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int num;
	for(int i=0;i<n;i++){
		cin>>num;
		int ans=0;
		int a=1;
		while(num>0){
		int aa=num%10;
	    ans=ans+(aa*a);
		a*=2;
		num/=10;
			}
			cout<<ans<<endl;
			
	}
	return 0;
}
