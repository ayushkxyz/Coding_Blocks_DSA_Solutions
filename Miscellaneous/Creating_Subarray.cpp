#include<iostream>
using namespace std;
void Subarray(int arr[],int n){
     int i=0;
     for(;i<n;i++){
         int k=i;
         while(k<n){
         for(int j=i;j<=k;j++){
             cout<<arr[j]<<" ";
         }
         cout<<endl;
         k++;
     }
}
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Subarray(arr,n);
    
}
