#include<iostream>
using namespace std;

int main() {
       int n;
	   cin>>n;
	   int ii=0;
	   while(ii<n-1){
		   cout<<"  ";
		   ii++;
	   }
	   cout<<" 1 "<<endl;
	   int num,den;
	   int i=1;
	   for(;i<n;i++){
		   num=1,den=1;
		   for(int sp=0;sp<n-i-1;sp++){
			   cout<<"  ";

		   }

        for(int j=0,k=i;j<=i;j++){
			if(j==0||j==i){
				cout<<" 1 ";
			}
			else{
			  num=num*k;
			  k--;
			  den=den*j;
			  int ans=num/den;
			  cout<<" "<<ans<<" ";
			}
		}
		cout<<endl;
	   }
	return 0;
}
