#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n>0){
	long long num;
	cin>>num;
	int ev=0,odd=0;
	for(;num>0;num=num/10){
		int a=num%10;
		if(a%2==0){
			ev=ev+a;

		}
		else{
			odd=odd+a;
		}
	}
	if(ev%4==0||odd%3==0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	n--;
	}
	return 0;
}
