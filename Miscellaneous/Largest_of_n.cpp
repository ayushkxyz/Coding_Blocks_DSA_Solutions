#include<iostream>
#include<cmath>
using namespace std;
void largest(int arr[],int n){
        int max=INT_MIN;
        int i=0;
        for(;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }

        }
    
    cout<<"the largest element is :"<<max;

}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      
      largest(arr,n);
  
}
