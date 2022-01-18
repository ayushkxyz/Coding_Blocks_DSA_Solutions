#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;
	long int ans=n1*n2;
	int a=min(n1,n2);
	int i=1;
	int lcm;
	while(i<=a){
		if(n1%i==0&&n2%i==0){
			lcm=ans/i;
		}
		i++;
	}
	cout<<lcm;

	return 0;
}
