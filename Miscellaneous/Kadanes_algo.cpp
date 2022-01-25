#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int maxi=arr[0];
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>=maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
    }
    cout<<"the maximum sum is :"<<maxi<<endl;}
