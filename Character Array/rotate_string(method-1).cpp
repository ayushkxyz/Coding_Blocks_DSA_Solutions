#include<iostream>
#include<string>
using namespace std;
int main(){
    char ch[200];
    cin>>ch;
    int n;
    cin>>n;
  int len=strlen(ch);
  int i=n;
  while(i>0){
      char temp=ch[len-1];
      int j=len-1;
      while(j>0){
          ch[j]=ch[j-1];
          j--;
      }
      ch[0]=temp;
      i--;
  }
  cout<<ch;

}
