#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	int arr[4];
	while(t){
      for(int i=0;i<4;i++){
		  cin>>arr[i];
	  }
	  int nr,nc;
	   cin>>nr>>nc;
	    int rick[nr];
		int cab[nc];
		for(int i=0;i<nr;i++){
			cin>>rick[i];
		}
		for(int i=0;i<nc;i++){
			cin>>cab[i];
		}
		int cab_cost=0,rick_cost=0;
		for(int i=0;i<nc;i++){
			cab_cost=min(arr[0]*cab[i],arr[1])+cab_cost;
		}
		for(int i=0;i<nr;i++){
          rick_cost=rick_cost+min(arr[0]*rick[i],arr[1]);
		}
		cab_cost=min(cab_cost,arr[2]);
		rick_cost=min(rick_cost,arr[2]);
		int total=min(arr[3],cab_cost+rick_cost);
		cout<<total<<endl;
		t--;

	}
	return 0;
}
