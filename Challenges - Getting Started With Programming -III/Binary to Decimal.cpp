#include<iostream>
using namespace std;

int main() {
	long int n;
	cin>>n;
	int a=1;
	long int ans=0;
	while(n>0){
      int aa=n%10;
	  ans=(ans)+(a*aa);
	  a=a*2;
	  n/=10;
	}
	cout<<ans;
	return 0;
}
