#include<iostream>
using namespace std;
int count(int n){
    int ans=0;
    while(n!=0){
        int a=n&1;
        if(a==1){
            ans++;
        }
        n=n>>1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans=count(n);
    cout<<"the number of sets are :"<<ans<<endl;
    return 0;
}
