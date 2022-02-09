#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool compare(string a,string b){
	int lena= a.length();
	int lenb=b.length();
	if(a.find(b)==0||b.find(a)==0){
		return lena>lenb;
	}
	else{
		return a<b;
	}
}
int main() {
     int n;
	 cin>>n;
	 cin.get();
	 string s[1000];

	 for(int i=0;i<n;i++){
		 getline(cin,s[i]);
	 }
	 sort(s,s+n,compare);
	 for(int i=0;i<n;i++){
		 cout<<s[i]<<endl;
	 }
	return 0;
}
