#include<iostream>
using namespace std;
void inverse(int arr[],int n){
	 int arr2[n];
	 for(int i=0;i<n;i++){
		 arr2[arr[i]]=i;
	 }
	 for (int i=0;i<n;i++){
		 arr[i]=arr2[i];
	 }

}
int main() {
	 int arr[100];
	 int n;
	 cin>>n;
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
	 }
	 inverse(arr,n);
	 for(int i=0;i<n;i++){
		 cout<<arr[i]<<" ";
	 }
	return 0;
}
