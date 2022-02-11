#include<iostream>
#include<cmath>
using namespace std;
double gp(int k){
   if(k==0){
       return 1;
   }
    double small=gp(k-1);
    return small+(double)(1.0/pow(2,k));
}
int main(){
    int k;
    cin>>k;
    cout<<gp(k)<<endl;
    return 0;
}
