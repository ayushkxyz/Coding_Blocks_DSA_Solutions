#include<iostream>
using namespace std;
int main() {
	int n1;
	int n2;
	cin>>n1;
	cin>>n2;
	int i=1;
	while(i<=n1){
		int a=(3*i)+2;
	
		if(a%n2!=0){
			cout<<a<<endl;
			
		}
		else{n1++;}
		i++;
		
	}
	return 0;
}
