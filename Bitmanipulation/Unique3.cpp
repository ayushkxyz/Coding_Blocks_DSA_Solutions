#include<iostream>
using namespace std;

int main() {
	int arr[64]={0};
	int a[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int n=a[i];
		int pos=0;
		while(n>0){
			if(n&1==1){
				arr[pos]++;
			}
			n=n>>1;
			pos++;
		}
	}
	for(int i=0;i<n;i++){
		arr[i]=arr[i]%3;
	}
	int ans=0;
	int pf=1;
	for(int i=0;i<n;i++){
		ans=ans+(arr[i]*pf);
		pf=pf*2;
	}
	cout<<ans;
	return 0;
}
