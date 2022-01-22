#include<iostream>
using namespace std;
int main() {
	int row,col;
	cin>>row>>col;
	int arr[100][100];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<col;i++){
		int j;
		 if(i%2==0){
			  j=0;
			  for(;j<row;j++){
				  cout<<arr[j][i]<<", ";
			  }
		 }
		 else{
			 j=row-1;
			 for(;j>=0;j--){
				 cout<<arr[j][i]<<", ";
			 }
		 }
	}
	cout<<"END";
	
	return 0;
}
