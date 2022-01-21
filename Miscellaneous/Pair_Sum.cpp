#include<iostream>
using namespace std;
int pair_sum(int arr[],int n,int sum){
        int i=0,j=n-1;
        int count=0;
        for(;i<j;){
            if(arr[i]+arr[j]==sum){
                count++;
                i++;
                j--;
            }
            else if(arr[i]+arr[j]>sum){
                j--;
            }
            else{
                i++;
            }
        }
            return count;
        }

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    cout<<pair_sum(arr,n,sum);
}
