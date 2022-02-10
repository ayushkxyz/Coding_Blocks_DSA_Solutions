#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	int n1,n2;
	while(t){
    cin>>n1>>n2;
	int count=0;
	 int i=n1;
	 while(i<=n2){
		 int num=i;
		 while(num>0){
			 if(num&1==1){
				 count++;
			 }
			 num=num>>1;
		 }
		 i++;
	 }
	 cout<<count<<endl;
	 t--;
	}
	return 0;
}
