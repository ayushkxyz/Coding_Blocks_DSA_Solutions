#include<iostream>
using namespace std;
 void bubblesort(int arr[],int size){
       if(size-1<1){
           return ;
       }
       for(int i=0;i<size-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
      bubblesort(arr,size-1);  

 }

int main(){
  int arr[100];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>arr[i];
  } 
   bubblesort(arr,n);
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
}
