#include<iostream>
using namespace std;
int main() {
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>arr[i];
}
for(int i=0,j=n-1;i<=j;i++,j--){
	swap(arr[i],arr[j]);
}
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<endl;

}	
return 0;
}
