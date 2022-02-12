#include<iostream>
#include<string>
using namespace std;
int convert(char a[],int size){
    if(size==0){return 0;
    }
    int ans=convert(a,size-1);
    int aa=a[size-1]-'0';
    return (ans*10)+aa;

     
    
}
int main(){
      char a[100];
      cin>>a;
      int len=strlen(a);
      cout<<convert(a,len);
}
