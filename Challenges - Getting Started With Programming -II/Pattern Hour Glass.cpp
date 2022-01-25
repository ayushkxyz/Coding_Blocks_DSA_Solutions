#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n+1;i++){
		for(int sp=1;sp<i;sp++){
			cout<<"  ";
		}
		int k=n-i+1;
		for(;k>=0;k--){
			cout<<k<<" ";
		}
		k=n-i+1;
		if(i<=n){
		for(int j=1;j<=k;j++){
			cout<<j<<" ";
		}
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		for(int sp=1;sp<=n-i;sp++){
			cout<<"  ";
		}
		for(int j=i;j>=0;j--){
			cout<<j<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<k<<" ";
		}
		cout<<endl;
	}
	return 0;
}
