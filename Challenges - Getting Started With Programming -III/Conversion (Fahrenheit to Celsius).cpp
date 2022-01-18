#include<iostream>
using namespace std;

int main() {
	int s,e,w;
	cin>>s>>e>>w;
	while(s<=e){
		cout<<s<<" "<<5*(s-32)/9<<endl;
		s=s+w;
	}
	return 0;
}
