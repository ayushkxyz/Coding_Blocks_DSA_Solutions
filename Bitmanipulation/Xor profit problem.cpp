#include<iostream>
#include<climits>
using namespace std;

int main () {
	int x,y;
	cin>>x;
	cin>>y;
	int ans=INT_MIN;
	for(int i=x;i<=y;i++){
      int a;
	  for(int j=i;j<=y;j++){
		  a=i^j;
		  if(a>ans){
			  ans=a;
		  }
	  }
	}
	  cout<<ans;
	return 0;
}
