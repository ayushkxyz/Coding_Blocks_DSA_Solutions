#include<iostream>
using namespace std;
int main() {
	long int n;
	cin>>n;
	long int ans=0;
	int a=1;
	 while(n>0){
		 int aa=n%8;
		 ans=(aa*a)+(ans);
         a=a*10;
		 n=n/8;
	 }
	 cout<<ans;
	return 0;
}
