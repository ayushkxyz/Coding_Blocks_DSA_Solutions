#include<iostream>
using namespace std;
int starircase(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return starircase(n-1)+starircase(n-2)+starircase(n-3);
}
int main(){
     int n;
     cin>>n;
     cout<<starircase(n)<<endl;
}
