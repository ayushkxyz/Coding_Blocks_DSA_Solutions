#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n1,n2,t;
	cin>>t;
	int arr1[100000],arr2[100000];
	while(t){
	cin>>n1>>n2;
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}

	int arr_common[100];
	int size=0;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(arr1[i]==arr2[j]){
				arr_common[size]=i;
				size++;
			}
		}
	}
    int max_sum=0;
	int s1;
	int s2;
	int i=0,j=0,k=0;
	
		  while(k<size){
			  s1=0;
			  s2=0;
		while(i<=arr_common[k]){
			s1=s1+arr1[i];
			i++;
		}
		while(arr2[j]!=arr1[arr_common[k]]){
			s2=s2+arr2[j];
			j++;
		}
		s2=s2+arr2[j];
		j++;
		
		max_sum=max_sum+max(s1,s2);
		k++;
		
		  }

       s1=0;
	   s2=0;
	     
	   while(i<n1){
		   s1=s1+arr1[i];
		   i++;
	   }
	   j++;
	   while(j<n2){
		   s2=s2+arr2[j];
		   j++;
	   }
	   max_sum=max_sum+max(s1,s2);
      
	
	cout<<max_sum<<endl;
	t--;
	}

	

 
	return 0;
}
