#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int n;
    int ans=0;
    for(int i=0;i<num;i++){
         cin>>n;
         ans=ans^n;
    }
    cout<<"the unique number is :"ans<<endl;
}
