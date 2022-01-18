#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;
	for(int i=1;i<=n1;i++){
		int a=(3*i)+2;
		if(a%n2==0){
			n1++;
		}
		else{
			cout<<a<<endl;
		}
	}
	return 0;
}
