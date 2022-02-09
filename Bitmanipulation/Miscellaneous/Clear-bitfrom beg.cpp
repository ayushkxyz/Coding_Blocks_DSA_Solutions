#include<iostream>
using namespace std;
void clear(int &n,int i){
   int mask=-1;
   mask=mask<<i;
   n= n&mask;
} 
int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
   clear(n,i);
   cout<<n<<endl;
   return 0;
}
