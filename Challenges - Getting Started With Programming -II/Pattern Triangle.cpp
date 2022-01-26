#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int k;
	for(int i=1;i<=n;i++){
		k=i;
  for(int sp=1;sp<=n-i;sp++){
	  cout<<" \t";
  }
  for(int j=1;j<=i;j++,k++){
	  cout<<k<<"\t";
  }
  if(i>1){
  int kk=k-2;
  for(int z=1;z<i;z++){
	  cout<<kk<<"\t";
	  kk--;
  }

	}
	cout<<endl;
	}
	return 0;
}
