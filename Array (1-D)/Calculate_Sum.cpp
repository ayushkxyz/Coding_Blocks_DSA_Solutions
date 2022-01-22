#include<iostream>
using namespace std;
int main() {
	int n;
	int arr[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int q;
	cin>>q;
	int x;
int arr1[n];
	while(q>0){
		
      cin>>x;
	  for(int i=0;i<n;i++){
		  int index=i-x;
		  if(index<0){
			  index=index+n;
		  }

		  arr1[i]=arr[i]+arr[index];

	  }
	  for(int i=0;i<n;i++){
		  arr[i]=arr1[i];
	  }
	  q--;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	cout<<sum;
	return 0;
}
