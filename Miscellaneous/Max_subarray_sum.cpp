#include<iostream>
#include<cmath>
using namespace std;
int Max_sum(int arr[],int n){
    int sum=INT_MIN;
    int s;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            s=0;
            for(int k=i;k<=j;k++){
                s=s+arr[k];
            }
            if(s>sum){
                sum=s;
            }
            
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Max_sum(arr,n)<<endl;
}
