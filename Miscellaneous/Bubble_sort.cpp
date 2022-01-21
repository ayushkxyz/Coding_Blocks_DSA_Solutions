 #include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
     int i=0;
    
  while(i<n-1){
      int j=0;
    while(j<n-1){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        
      }
      j++;
       
         }
               n--;
  
}
}
int main(){
  int arr[100];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  bubble_sort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
