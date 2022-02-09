#include<iostream>
using namespace std;
bool isOdd(int n){
    if((n&1)==0){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int n;
    cin>>n;
  if(isOdd(n)){
      cout<<"The number is odd\n";
  }
  else{
      cout<<"The number is even\n";
  }
  return 0;
}
