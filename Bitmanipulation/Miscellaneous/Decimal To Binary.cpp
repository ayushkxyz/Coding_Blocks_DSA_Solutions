#include<iostream>
using namespace std;
/*
int main(){
     int n;
     cin>>n;
     long int ans=0;
     long int mf=1;
     for(;n>0;n=n/2,mf=mf*10){
         int a=n%2;
         ans=ans+(mf*a);
     }
     cout<<ans<<endl;
}
*/
//method 2
int main(){
    int n;
    cin>>n;
    int ans=0;
    int mf=1;
    while(n>0){
        int a=n&1;
        ans=ans+(a*mf);
        n=n>>1;
        mf=mf*10;

    }
    cout<<ans<<endl;
}
