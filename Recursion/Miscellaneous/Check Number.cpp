#include<iostream>
using namespace std;
bool ispresent(int arr[],int size,int x){
    if(size==0){
        return false;
    }
    bool small=ispresent(arr+1,size-1,x);
    if(arr[0]==x){
        return true;
    }
    return small;
}
int main(){
     int arr[1000];
     int size;
     cin>>size;
     for(int i=0;i<size;i++){
         cin>>arr[i];
     }
     int x;
     cin>>x;
    bool b=ispresent(arr,size,x);
    if(b){
        cout<<"present\n";
    }
    else{
        cout<<"Not present\n";
    }
    return 0;

}
