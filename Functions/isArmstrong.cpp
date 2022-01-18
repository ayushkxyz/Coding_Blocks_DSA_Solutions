#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int num;
	cin>>num;
	int n=num;
	int count=0;
	while(n>0){
		count++;
       n=n/10;
	}
	n=num;
	int ans=0;
	while(n>0){
		int a=n%10;
		ans=ans+pow(a,count);
		n=n/10;
	}
	if(num==ans){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
