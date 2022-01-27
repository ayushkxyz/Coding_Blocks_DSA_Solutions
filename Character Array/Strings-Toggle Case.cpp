#include<iostream>

using namespace std;
int main() {
	char ch[1000];
	cin.getline(ch,1000);
    for(int i=0;ch[i]!='\0';i++){
		if(ch[i]>='a'&& ch[i]<='z'){
			ch[i]=ch[i]-32;
		}
		else{
        ch[i]=ch[i]+32;
		}
	}
	cout<<ch;
	return 0;
}
