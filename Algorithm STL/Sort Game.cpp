#include<iostream>
#include<algorithm>
#include<string>
 using namespace std;
 bool compare(pair<string,int>a,pair<string,int>b){
	 if(a.second==b.second){
		 return a.first<b.first;
	 }
	 else{
		 return a.second>b.second;
	 }
 }
int main() {
	pair<string,int>arr[100000];
	int m;
	cin>>m;
    int n;
	cin>>n;
	cin.get();
   for(int i=0;i<n;i++){
	   cin>>arr[i].first>>arr[i].second;
	   }
   sort(arr,arr+n,compare);
   for(int i=0;i<n;i++){
	   if(arr[i].second>=m){
	   cout<<arr[i].first<<" "<<arr[i].second<<endl;
   }
   }
	return 0;
}
