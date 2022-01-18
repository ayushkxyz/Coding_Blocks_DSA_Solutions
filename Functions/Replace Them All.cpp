#include<iostream>
using namespace std;
int main() {
	long int n ;
	cin>>n;
	if(n==0){
		cout<<5;
		
	}
	else{
   long int ans=0;

 long int aa=1;
	while(n>0){
		int a=n%10;
		if(a==0){
          a=5;
		}
		ans=(ans)+(a*aa);
		n=n/10;
		aa*=10;
	}
	cout<<ans;
	}
	return 0;
}
