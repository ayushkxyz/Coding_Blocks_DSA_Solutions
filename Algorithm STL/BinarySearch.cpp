 #include<iostream>
using namespace std;
int main() {
	 int n;
	 cin>>n;
	 long int arr[100000];
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
	 }
	 long int num;
	 cin>>num;

	 int start=0,end=n-1;
	 int mid;
	 while(start<=end){
          mid=(start+end)/2;
		  if(arr[mid]==num){
			  cout<<mid;
			  break;
		  }
		  else if(arr[mid]>num){
			  end=mid-1;
		  }
		  else{
			  start=mid+1;
		  }
	 }
	 if(start>end){
      cout<<"-1";
	 }
	 
	return 0;
}
