#include<iostream>
#include<string>

using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
  while(n>0){
      int a=n&1;
      if(a==1){
      s.push_back('1');
  }
  else{
      s.push_back('0');
  }
  n=n>>1;
    
}

reverse(s.begin(),s.end());
cout<<s<<endl;
}
