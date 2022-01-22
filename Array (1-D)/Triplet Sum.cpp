#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int arr[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int sum;
	cin>>sum;

	int count=0;
	for(int i=0;i<n-2;i++){
		int j=i+1;
		int k=n-1;
	    while(j<k){
			if(arr[j]+arr[k]+arr[i]==sum){
				cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
				j++;
				k--;
			}
			else if(arr[i]+arr[j]+arr[k]>sum){
				k--;
			}
			else{
				j++;
			}
		}
	}
	
	return 0;
}
