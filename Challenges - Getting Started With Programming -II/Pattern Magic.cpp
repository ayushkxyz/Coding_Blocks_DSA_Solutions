  #include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1,k=n;i<=n;i++,k--){
		for(int j=1;j<=k;j++){
			cout<<"*";
		}
		for(int sp=1;sp<=(2*(i-1))-1;sp++){
			cout<<" ";
		}
		if(i==1){
			for(int j=1;j<=n-1;j++){
				cout<<"*";
			}
		}
		else{
		for(int j=1;j<=k;j++){
			cout<<"*";
		}
		}
		cout<<endl;
	}

	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int sp=1;sp<=(2*(n-i))-1;sp++){
			cout<<" ";
		}
		
		if(i==n){
		  for(int j=1;j<=n-1;j++){
			  cout<<"*";
		  }

		}
		else{
			for(int j=1;j<=i;j++){
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}
