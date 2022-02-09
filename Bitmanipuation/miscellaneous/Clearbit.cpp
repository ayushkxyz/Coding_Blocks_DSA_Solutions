#include<iostream>
using namespace std;
void clearBit(int &n,int i){
      int mask=1<<i;
      mask=~mask;
      n=n&mask;
}
int main(){
    int n;
    cin>>n;

clearBit(n,3);
cout<<n;
 
}
