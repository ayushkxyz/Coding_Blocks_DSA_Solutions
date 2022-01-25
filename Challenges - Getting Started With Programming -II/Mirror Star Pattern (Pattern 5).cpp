#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int n1=(n+1)/2;
	int n2=n-n1;
    for(int i=1;i<=n1;i++){
       for(int spaces=1;spaces<=n1-i;spaces++){
		   cout<<"  ";
	   }
	   for(int j=1;j<=(2*i)-1;j++){
		   cout<<"* ";
	   }
	   cout<<endl;
	}
	for(int i=n2,k=1;i>0;i--,k++){
		  for(int sp=1;sp<=k;sp++){
			  cout<<"  ";
		  }
		  for(int j=1;j<=(2*i)-1;j++){
			  cout<<"* ";
		  }
		  cout<<endl;
	}
	return 0;
}#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int n1=(n+1)/2;
	int n2=n-n1;
    for(int i=1;i<=n1;i++){
       for(int spaces=1;spaces<=n1-i;spaces++){
		   cout<<"  ";
	   }
	   for(int j=1;j<=(2*i)-1;j++){
		   cout<<"* ";
	   }
	   cout<<endl;
	}
	for(int i=n2,k=1;i>0;i--,k++){
		  for(int sp=1;sp<=k;sp++){
			  cout<<"  ";
		  }
		  for(int j=1;j<=(2*i)-1;j++){
			  cout<<"* ";
		  }
		  cout<<endl;
	}
	return 0;
}
