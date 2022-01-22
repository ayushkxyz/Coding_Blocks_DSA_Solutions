#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main() {
	 int t;
	 int arr[100000];
	 cin>>t;
	 while(t>0){
       int n;
	   cin>>n;
	   for(int i=0;i<n;i++){
		   cin>>arr[i];
	   }
    int p;
	cin>>p;
    sort(arr,arr+n);
	int min=INT_MAX;
	int i,j;
	for(int k=0,jj=n-1;k<jj;){
		if(arr[k]+arr[jj]==p){
			if(arr[jj]-arr[k]<min){
				min=arr[jj]-arr[k];
				i=k;j=jj;
			}
			k++;
			jj--;
		}
		else if(arr[k]+arr[jj]>p){
                jj--;
		}
		else{
			k++;
		}
	}
	cout<<"Deepak should buy roses whose prices are "<<arr[i]<<" and "<<arr[j]<<"."<<endl;

	t--;
	 }
	return 0;
}
