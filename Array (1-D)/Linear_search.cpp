#include<iostream>
using namespace std;

int main() {
	long int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int i=0;
	for(;i<n;i++){
		if(arr[i]==key){
			cout<<i;
			break;
		}
	}
	if(i==n){
		cout<<"-1";
	}
	return 0;
}
