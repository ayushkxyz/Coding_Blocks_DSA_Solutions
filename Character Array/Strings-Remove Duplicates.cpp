#include<iostream>
using namespace std;
int main() {
	char ch[1000];
	cin.getline(ch,1000);
	for(int i=0;ch[i+1]!='\0';){
		if(ch[i]==ch[i+1]){
			int j=i+1;
			for(;ch[j+1]!='\0';j++){
				ch[j]=ch[j+1];
			}
			ch[j]='\0';
		}
		else{
			i++;
		}
	}
	cout<<ch;
	return 0;
}
