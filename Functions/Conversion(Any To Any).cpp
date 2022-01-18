#include<iostream>
using namespace std;
long int convert(int sb,int db,int sn){
	long int ans=0;
	long int fac=1;
	while(sn>0){
		int a=sn%10;
		ans=ans+(fac*a);
		sn=sn/10;
		fac=fac*sb;
	}
	long int dn=0;
	fac=1;
	while(ans>0){
		long int a=ans%db;
		dn=dn+(fac*a);
		fac=fac*10;
		ans=ans/db;

	}
	return dn;
}

int main() {
	int sb,db,sn;
	cin>>sb>>db>>sn;
	long int ans=convert(sb,db,sn);
	cout<<ans;
	return 0;
}
