#include<iostream>
using namespace std;
int binary_search(int arr[],int start,int end,int key){
   if(start>end){
       return -1;
   }
   int mid=(start+end)/2;
   if(arr[mid]==key){return mid;}
   
   else if(arr[mid]>key){
       return binary_search(arr,start,mid-1,key);
   }
   else{
       return binary_search(arr,mid+1,end,key);
   }
    
  
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binary_search(arr,0,n,key);

}
