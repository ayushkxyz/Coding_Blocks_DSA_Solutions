#include<iostream>
#include<climits>
using namespace std;
int main() {
	int arr[10000];
	int t;
	cin>>t;
	while(t){
	int n;
	cin>>n;
	int maxi=INT_MIN;
	int sum;
for(int i=0;i<n;i++){
      cin>>arr[i];
	}
for(int i=0;i<n;i++){
	sum=0;
int j=i;
do{
	sum=sum+arr[j];
	if(sum>maxi){
		maxi=sum;
	}
	if(sum<0){
		sum=0;
	}
	j=(j+1)%n;
}
while(j!=i);

}
cout<<maxi<<endl;
t--;
	}

	return 0;

}
