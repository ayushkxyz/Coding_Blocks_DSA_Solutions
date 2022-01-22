 #include<iostream>
using namespace std;
int main() {
	int arr[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int q;
	cin>>q;

	while(q>0){
		int a=0;
       int total_amount;
	   int count;
	   cin>>total_amount>>count;
	    
	    
      for(int i=0;i<n;i++){
		  if(total_amount%arr[i]==0){
			  a++;
		  }
	  }
	  if(a>=count){
		  cout<<"Yes"<<endl;
	  }
	  else{
		  cout<<"No"<<endl;
	  }
	  q--;
	}
	return 0;
}
