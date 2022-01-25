#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[1000]={0};
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int csum[100]={0};
    for(int i=1;i<n+1;i++){
        csum[i]=csum[i-1]+arr[i];
    }
    int max_sum=INT_MIN;
    for(int i=1;i<=n;i++){
       
        for(int j=i;j<=n;j++){
             int sum=0;
            sum=csum[j]-csum[i-1];
            if(sum>max_sum){
            max_sum=sum;
        }
        }
        
    }
    cout<<max_sum<<endl;

}
