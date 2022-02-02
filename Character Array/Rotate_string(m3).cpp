#include<iostream>
#include<string>
using namespace std;
int main(){
    char ch[1000];
    cin>>ch;
    int n;
    cin>>n;
    int len=strlen(ch);
    for(int j=len-1;j>=0;j--){
        ch[j+n]=ch[j];
    }
    int l=len;
    int i=0;
    while(i<n){
        ch[i]=ch[l];
        i++,l++;
    }
    ch[len]='\0';
    cout<<ch;
}
