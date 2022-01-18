#include<iostream>
using namespace std;
int main() {
	long int n;
	cin>>n;
	int x;
	cin>>x;
	int count=0;
	while(n>0){
		int a=n%10;
		if(a==x){
			count++;
		}
		n=n/10;
	}
	cout<<count;
	return 0;
}
