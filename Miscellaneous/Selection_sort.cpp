#include<iostream>
#include<cmath>
using namespace std;
void Selection_sort(int arr[],int n){
     
     for(int j=0;j<n-1;j++){
         int min_=INT_MAX;
         int k=j;
     for(int i=j;i<n;i++){
         if(arr[i]<min_){
             min_=arr[i];
             k=i;
         }
       
     }
      swap(arr[j],arr[k]);
}
}
int main(){
     int arr[100];
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     Selection_sort(arr,n);
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     return 0;
}
