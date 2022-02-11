#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==1||size==0){
        return true;
    }
    bool is_smallsorted=isSorted(arr+1,size-1);
    if(is_smallsorted && arr[0]<arr[1]){
        return true;
    }
    else{
        return false;
    }
}
int main(){
     int arr[1000];
     int size;
     cin>>size;
     for(int i=0;i<size;i++){
         cin>>arr[i];
     }
     if(isSorted(arr,size-1)){
         cout<<"the array is sorted\n";
     }
     else{
         cout<<"the array is not sorted\n";
     }
 return 0;
}
