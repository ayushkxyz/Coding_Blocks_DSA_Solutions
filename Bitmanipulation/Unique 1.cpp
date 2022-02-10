#include<iostream>
using namespace std;
int main() {
	int n;
	cin >>n;
	int num;
	int ans=0;
	while(n>0){
		cin>>num;
     ans=ans^num;
	 n--;
	}
	cout<<ans;
	return 0;
}
