#include<iostream>
using namespace std;
int sum(int input[],int size){
    if(size==0){
        return 0;
    }
    int smaller_sum=sum(input+1,size-1);
    return input[0]+smaller_sum;
}
int main(){
    int arr[1000];
     int size;
     cin>>size;
     for(int i=0;i<size;i++){
         cin>>arr[i];
     }
     cout<<sum(arr,size)<<endl;
}
