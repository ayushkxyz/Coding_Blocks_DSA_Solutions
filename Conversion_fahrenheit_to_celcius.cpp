#include<iostream>
using namespace std;
int main() {
	int min,max,step;
	cin>>min>>max>>step;
	for(;min<=max;min=min+step){
		int ans=5.0*(min-32)/9;
		cout<<min<<" "<<ans;
		cout<<endl;
	}
	return 0;
}
