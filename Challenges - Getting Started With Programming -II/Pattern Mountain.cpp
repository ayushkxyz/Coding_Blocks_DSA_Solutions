#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int j;
		for(j=1;j<=i;j++){
			cout<<j<<"\t";
		}
		for(int spaces=1;spaces<=(2*(n-i))-1;spaces++){
			cout<<" \t";
		}
		j--;
		for(;j>=1;j--){
			if(j==n){
				j--;
			}
			cout<<j<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
