  #include<iostream>
using namespace std;
int main() {
	int freq[256]={0};

	char ch[1000];
	cin.getline(ch,1000);
	for(int i=0;ch[i]!='\0';i++){
		int a=ch[i];
		freq[a]++;
	}
	int m=-1000;
	int index;
	for(int i=0;i<256;i++){
       if(freq[i]>m){
		   m=freq[i];
		   index=i;
		   
	   }
	}
	char chi=index;
	cout<<chi;

	return 0;
}
