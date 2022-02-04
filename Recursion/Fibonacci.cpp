#include<iostream>
using namespace std;
int fibonacci(int n){
  if(n==1||n==2)
     {return 1;}
     int a=fibonacci(n-1);
     int b=fibonacci(n-2);
     return a+b;
     /*
  return fibonacci(n-1)+fibonacci(n-2);
  */
}
int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    cout<<"the coreesponding fibonacci number is: "<<fibonacci(n);

    
}
