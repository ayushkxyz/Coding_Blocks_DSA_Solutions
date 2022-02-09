#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    cout<<"enter the number of different Currencies available\n";
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int money;
    cout<<"enter the amount for which you want change\n";
    cin>>money;
    while(money>0){
    int index=lower_bound(arr,arr+n,money)-arr;
    if(arr[index]==money){
        cout<<arr[index]<<endl;
        money=money-arr[index];
    }
    else if(arr[index]>money){
        cout<<arr[index-1]<<endl;
        money=money-arr[index-1];
    }
}
}
