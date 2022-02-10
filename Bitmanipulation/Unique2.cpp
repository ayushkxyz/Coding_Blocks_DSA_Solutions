#include<iostream>
using namespace std;
int main() {
	int arr[100000];
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		ans=ans^arr[i];

	}
	int pos=0;
	int a=ans;
	while(a>0){
		if(a&1==1){
			break;
		}
		pos++;
		a>>1;
	}
	int x=1<<pos;
	int un1=0;
	for(int i=0;i<n;i++){
		if(arr[i]&x==1){
			un1=un1^arr[i];
		}
	}
	int un2=ans^un1;
	cout<<min(un1,un2)<<" "<<max(un1,un2);

	

	return 0;
}
