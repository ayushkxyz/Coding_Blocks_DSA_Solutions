#include<iostream>
using namespace std;
int staircase(int n,int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int i=1;
    int sum=0;
    while(i<=k){
     sum=staircase(n-i,k)+sum;
     i++;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<staircase(n,k);
}
