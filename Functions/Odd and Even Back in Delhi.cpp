#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	long int n;
	while(t>0){
    cin>>n;
	int e=0,o=0;
     while(n>0){
     if((n%10)%2==0){
		 e=e+(n%10);
	 }
	 else{
		 o=o+(n%10);

	 }
	 n/=10;
	 }
	 if(e%4==0||o%3==0){
		 cout<<"Yes\n";
	 }
	 else{
		 cout<<"No\n";
	 }
	 t--;
	}
	
	

	return 0;
}
