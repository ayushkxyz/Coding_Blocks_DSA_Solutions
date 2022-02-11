#include<iostream>
using namespace std;
bool issorted(int arr[],int n,int i){
	if(i==n-1){
       return true;
	}
	bool small=issorted(arr,n,i+1);
     if(small&&arr[i]<arr[i+1]){
		 return true;
	 }
	 else{
		 return false;
	 }
}
int main() {
	int arrr[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arrr[i];
	}
	if(issorted(arrr,n,0)){cout<<"true";}
	else{
		cout<<"false";
	}
	return 0;
}
