#include<iostream>

using namespace std;
int main() {
	int t;
	cin>>t;
	int arr[1000000];
	while(t){
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int prefix[n];
	int suffix[n];
	prefix[0]=arr[0];
	suffix[n-1]=arr[n-1];
	for(int i=1;i<n;i++){
        if(prefix[i-1]>arr[i]){
			prefix[i]=prefix[i-1];
		}
		else{
			prefix[i]=arr[i];
		}
	}
	for(int j=n-2;j>=0;j--){
		if(suffix[j+1]>=arr[j]){
			suffix[j]=suffix[j+1];
		}
		else{
			suffix[j]=arr[j];
		}
	}
	int count=0;

for(int i=0;i<n;i++){
	int a=min(suffix[i],prefix[i])-arr[i];
	if(a>0){
		count=count+a;
	}
}
cout<<count<<endl;
t--;
	}
	return 0;
}
