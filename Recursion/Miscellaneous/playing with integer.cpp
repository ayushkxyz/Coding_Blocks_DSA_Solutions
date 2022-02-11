#include<iostream>
#include<string>
using namespace std;

void convert(int n){
    if(n==0){
        return;
    }
    string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    convert(n/10);
    int an=n%10;
    cout<<a[an]<<" ";
}

int main(){
   int n;
   cin>>n;
   convert(n);
}
