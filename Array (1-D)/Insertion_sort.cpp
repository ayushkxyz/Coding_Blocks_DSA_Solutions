#include<iostream>
using namespace std;
void Insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }   
    
}

int main(){
    int arr[233];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
   Insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
