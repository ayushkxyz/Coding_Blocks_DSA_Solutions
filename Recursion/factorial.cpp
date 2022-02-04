#include<iostream>
using namespace std;
int fact(int n){
      if(n==0){
          return 1;
      }
    return fact(n-1)*n;
     /* int smallans=fact(n-1);
      return n*smallans;
      */
}
int main(){
    cout<<"Enter the number\n";
    int n;
    cin>>n;
    cout<<"the factorial is : "<<fact(n);
    return 0;
}
