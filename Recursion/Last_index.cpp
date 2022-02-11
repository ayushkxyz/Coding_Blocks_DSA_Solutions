#include<iostream>
using namespace std;
int last(int arr[],int size,int x){
	if(size-1==0){return -1;}
    
	if(arr[size-1]==x){return size-1;}
	return last(arr,size-1,x);
}
int main() {
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	cout<<last(arr,n,x);
	return 0;
}
