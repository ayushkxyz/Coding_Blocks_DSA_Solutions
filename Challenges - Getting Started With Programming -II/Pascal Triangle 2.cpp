//nth element of the pascals triangle
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the row and column\n";
    cin>>row>>col;
    int n=1,r=1;
    row--;
    col--;
    while(r<=col){
        r=r*col;
        n=n*row;
        col--;
        row--;
    }
    cout<<n/r;

}
