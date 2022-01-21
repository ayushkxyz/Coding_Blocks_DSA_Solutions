#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int key){
     int i=0;
     while(i<n){
         if(arr[i]==key){
             return i;
         }
         i++;
     }
     if(i==n){
         return -1;
     }
}

int main(){
  int arr[100];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int key;
  cin>>key;
  int ans=linear_search(arr,n,key);
  cout<<ans;
}
