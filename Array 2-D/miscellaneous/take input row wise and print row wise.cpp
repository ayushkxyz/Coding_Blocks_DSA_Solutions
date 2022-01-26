//take input rowwise and print rowwise
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[100][100];
	int row,col;
	cin>>row>>col;
	int k=1;
	for(int i=0;i<row;i++){
	    for(int j=0;j<col;j++,k++){
	        arr[i][j]=k;
	    }
	}
	for(int i=0;i<row;i++){
	    for(int j=0;j<col;j++){
	        cout<<arr[i][j]<<" ";
	        }
	        cout<<endl;
	}
	return 0;
}
