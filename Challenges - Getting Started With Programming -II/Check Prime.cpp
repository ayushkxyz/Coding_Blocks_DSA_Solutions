#include<iostream>
using namespace std;

int main() {
	
	long int num;
	cin>>num;
	int d=2;
	while(d<num){
		if(num%d==0){
			cout<<"Not Prime\n";
			break;
		}
		d++;
	}
	if(d==num){
		cout<<"Prime\n";
	}
	return 0;
}
