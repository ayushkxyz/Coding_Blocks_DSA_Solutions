#include<iostream>
using namespace std;
int main() {
	 int a=0,b=1;
	int n,c;
	cin>>n;
	while(n>0){
	c=a+b;
	a=b;
	b=c;
	n--;
	}
	cout<<a;

	return 0;
}
