#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	 char ch[1000];
	 cin.getline(ch,1000);
	 int i=0;
  int j=1;
            for(;ch[i+1]!='\0';){
			
				if(ch[i]==ch[i+1]){
					j++;
					i++;
				}
				else{
					if(j==1){
						cout<<ch[i];
						i++;
					}
					else{
					cout<<ch[i]<<j;
					i++;
					j=1;
				}
			}
	 }
	 if(j>1){
		 cout<<ch[i]<<j;

	 }
	 else{
		 cout<<ch[i];
	 }
	return 0;
}
