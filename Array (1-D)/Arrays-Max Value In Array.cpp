#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main() {
	long int arr[1000];
	int n;
	cin>>n;
	int max_elem=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		 if(max_elem<arr[i]){
			 max_elem=arr[i];
		 }
	}
	cout<<max_elem;
	return 0;
}
