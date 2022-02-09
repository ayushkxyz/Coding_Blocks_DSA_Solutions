#include<iostream>
#include<cmath>
using namespace std;
void clear(int &n,int i ,int j){
    int maska=-1;
    maska=maska<<j;
    int maskb=pow(2,i)-1;
    int mask=maska|maskb;
    n=n&mask;
}
int main(){
     int n;
     cin>>n;
     int i,j;
     cin>>i>>j;
     clear(n,i,j);
     cout<<n<<endl;
}
