#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long int n;
	cin>>n;
	long int ans=0;
	int power=1;
	while(n>0){
		int pos=n%10;
        ans=ans+(power*pow(10,pos-1));
		power++;
		n=n/10;
	}
 cout<<ans;
	return 0;
}
