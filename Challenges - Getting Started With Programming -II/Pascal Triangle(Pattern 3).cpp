#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	cout<<"1"<<endl;
	int i=1;
	int num;
	int den;
	int ans;
	for(;i<n;i++){
        num=1;
		den=1;
		for(int j=0,k=i;j<=i;j++){
			if(j==0||j==i){
                 cout<<"1\t";
			}
			else{
         num=num*k;
		 k--;
		 den=den*j;
        ans=num/den;
		cout<<ans<<"\t";
		}
	}cout<<endl;
	
	}
	return 0;
}
