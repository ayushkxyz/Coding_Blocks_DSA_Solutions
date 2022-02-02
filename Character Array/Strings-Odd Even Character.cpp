#include<iostream>
using namespace std;
int main() {
	char ch[1000];
	cin.getline(ch,1000);
	for(int i=0,j=1;ch[i]!='\0';i++,j++){
		if(j%2==0){
			ch[i]=ch[i]-1;
		}
		else{
			ch[i]=ch[i]+1;
		}
	}
	cout<<ch;
	return 0;
}
