#include<iostream>
using namespace std;
int checkIth(int n,int i){
    int mask=1<<i;
    int a=n&mask;
    if(a>0){
        return 1;
    }
    
    return 0;
}
int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    cout<<"the iTH bit of the number is :"<<checkIth(n,i);
}
