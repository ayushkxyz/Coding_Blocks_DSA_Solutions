#include<iostream>
#include<string>
using namespace std;
int main(){
char ch[1000];
cin>>ch;
int len=strlen(ch);
int n;
cin>>n;
int i=0;
int j=len-1;
for(;i<j;i++,j--){
    swap(ch[i],ch[j]);
}
for(int k=0,kk=len-n;k<kk;k++,kk--){
    swap(ch[k],ch[kk]);
}
for(int l=n,last=len-1;l<last;l++,last--){
    swap(ch[l],ch[last]);
}

cout<<ch;
}
