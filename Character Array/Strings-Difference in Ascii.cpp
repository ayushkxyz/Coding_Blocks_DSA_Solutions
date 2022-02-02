#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	char ch[1000];
	cin.getline(ch,1000);
	int i=0;
	for(;ch[i+1]!='\0';i++){
          int a=ch[i+1]-ch[i];
		  cout<<ch[i]<<a;
	}
	cout<<ch[i];

	return 0;
}
