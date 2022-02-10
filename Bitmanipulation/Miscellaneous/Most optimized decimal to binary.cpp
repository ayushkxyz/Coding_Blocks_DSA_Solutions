#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mask=1<<30;
    bool isone=false;
    while(mask!=0){
        int a=n&mask;
        if(a>0&&isone==false){
            isone=true;

        }
        if(isone){
            if(a>0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        mask=mask>>1;
    }
    return 0;
}
