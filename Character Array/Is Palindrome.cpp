#include<iostream>
#include<cstring>
using namespace std;

int main() {
     char a[1000];
	 cin.getline(a,1000);
	 bool b=true;
	 int l=strlen(a)-1;
	 for(int i=0;i<l;i++,l--){
		 if(a[i]!=a[l]){
			 b=false;
		 }
	 }
	 if(b){
		 cout<<"true";
	 }
	 else{
		 cout<<"false";
	 }


	return 0;
}
