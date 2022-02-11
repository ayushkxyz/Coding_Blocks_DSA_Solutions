#include<iostream>
using namespace std;
int countZeros(int n){
    if(n<=9){
        if(n!=0){
            return 0;
        }
        else{
            return 1;
        }
    }
    int small=countZeros(n/10);
    if(n%10==0){
        return 1+small;
    }
    else{
        return small;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<countZeros(n)<<endl;
}
