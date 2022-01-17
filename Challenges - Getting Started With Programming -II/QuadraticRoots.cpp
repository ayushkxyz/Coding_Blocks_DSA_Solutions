#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int d=(b*b)-(4*a*c);
	if(d==0){
		float aa=-1.0*((b)/(2.0*a));
		int rr=aa;
		cout<<"Real and Equal"<<endl;
		cout<<rr<<" "<<rr;
	}
	else if(d<0){
		cout<<"Imaginary";
	}
	else{
		float dd=sqrt(d);
		int r1=((-1*b)+dd)/(2*a);
		int r2=((-1*b)-dd)/(2*a);
		cout<<"Real and Distinct\n";
		cout<<min(r1,r2)<<" "<<max(r1,r2);
        

		
	}
	return 0;
}
