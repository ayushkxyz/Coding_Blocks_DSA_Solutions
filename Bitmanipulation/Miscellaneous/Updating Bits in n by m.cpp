#include<iostream>
using namespace std;
void clear(int&n,int j,int i){
     int maska=-1;
     maska=maska<<j;
     int maskb=1<<i;
     int mask=maska|maskb;
     n=n&mask;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int j,i;
    cin>>j>>i;
    clear(n,j,i-1);
    m=m<<(i-1);
    n=n|m;
    cout<<n<<endl;



}
