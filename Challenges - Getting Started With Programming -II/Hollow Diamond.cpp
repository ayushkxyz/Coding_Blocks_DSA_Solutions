#include<iostream>
using namespace std;
int main() {
     int n;
	 cin>>n;
	 int j=(n/2);
	 for(int i=0;i<=n/2;i++,j--){
		 for(int k=0;k<=j;k++){
          cout<<"*\t";
		 }
	for(int sp=0;sp<(2*i)-1;sp++){
		cout<<" \t";
	}
	if(i==0){
		for(int k=1;k<=j;k++){
			cout<<"*\t";
		}
	}
	else{
		for(int k=0;k<=j;k++){
			cout<<"*\t";
		}
	}
	cout<<endl;

	 }
	 for(int i=1;i<(n/2)+1;i++){
         for(int j=0;j<=i;j++){
			 cout<<"*\t";
		 }
		 for(int sp=0;sp<(2*((n/2)-i))-1;sp++){
			 cout<<" \t";
		 }
		 if(i==(n/2)){
			 for(int j=1;j<=i;j++){
				 cout<<"*\t";
			 }
		 }
		 else{
		 for(int j=0;j<=i;j++){
			 cout<<"*\t";
		 }}

		 cout<<endl;
	 }

	return 0;
}
