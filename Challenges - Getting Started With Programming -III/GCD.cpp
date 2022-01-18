#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;
	int gcd=1;
	int a=min(n1,n2);
	int i=1;
	while(i<=a){
		if(n1%i==0&&n2%i==0){
         gcd=i;
		}
		 i++;
	}
	cout<<gcd;
     
	return 0;
}
