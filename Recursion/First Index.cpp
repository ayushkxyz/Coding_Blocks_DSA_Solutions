#include<iostream>
using namespace std;
int first(int arr[],int size,int x){
     if(size==0){
      return -1;
	 }
	 if(arr[0]==x){
		 return 0;
	 }
	 int smallindex=first(arr+1,size-1,x);
	 if(smallindex>=0){
		 return smallindex+1;
	 }
	else{
		return smallindex;
	}
		 
	 

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
	cout<<first(arr,n,x);

	return 0;
}
