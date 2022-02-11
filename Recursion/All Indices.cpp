#include<iostream>
using namespace std;
void allindex(int arr[],int size,int x,int i){
	if(size==0){
		
		return ;
	}
	if(arr[0]==x){
		cout<<i<<" ";
	}
	allindex(arr+1,size-1,x,i+1);
}
int main() {
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	allindex(arr,n,key,0);
	return 0;
}
