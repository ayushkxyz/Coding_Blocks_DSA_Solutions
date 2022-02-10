#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	int n;

	while(t){
   cin>>n;
   int bit=0;
   while(n>0){
     if(n&1==1){
		 bit++;
	 }
	 n=n>>1;
   }
   cout<<bit<<endl;
   t--;
	}
	return 0;
}
