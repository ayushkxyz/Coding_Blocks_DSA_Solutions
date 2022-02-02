  #include<iostream>
#include<string>
using namespace std;
int main() {
   char ch[1000];
   cin.getline(ch,1000);
   cout<<ch[0];
   for(int i=1;ch[i]!='\0';){
	     int j=i;
		 while(ch[j]!='\0' && ch[j]>='a' && ch[j]<='z'){
			 cout<<ch[j];
		
			 j++;
		 }
		 if(ch[j]=='\0'){
			 return 0;
		 }
		 else{
		
		 cout<<endl;
		 cout<<ch[j];
		 i=j+1;
		 }
   }
	return 0;
}
