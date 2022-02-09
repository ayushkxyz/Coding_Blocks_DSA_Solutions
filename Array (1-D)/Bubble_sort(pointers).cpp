#include<iostream>
using namespace std;
void Bubble_sort(int*arr,int size){
     for(int j=size-1;j>0;j--){
           int i=0;
           while(i<j){
           if(arr[i]>=arr[i+1]){
               swap(arr[i],arr[i+1]);
           }
             i++;
           }
           
     }
        
}
int main(){
   int arr[100];
   int n;
   cout<<"Enter the size of the Array\n";
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   Bubble_sort(arr,n);

   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
}
}
