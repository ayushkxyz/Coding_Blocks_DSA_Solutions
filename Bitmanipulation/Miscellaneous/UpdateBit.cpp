#include<iostream>
using namespace std;
void clear_update(int &n,int v,int i){
     int mask=1<<i;
     mask=~mask;
     n=n&mask;
     n=n|(v<<i);
}
int main(){
    int n;
    cin>>n;
    int v;
    cin>>v;
    int i;
    cin>>i;
    clear_update(n,v,i);
    cout<<n;
}
