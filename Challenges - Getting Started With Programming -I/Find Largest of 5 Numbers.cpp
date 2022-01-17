 #include<iostream>
 #include<climits>
 using namespace std;
 int main(){
	 int i=INT_MIN;
	 int num;
	 int count=0;
	 while(count<=5){
		 cin>>num;
		 count++;
		 if(num>i){
			 i=num;
		 }
	 }
	 cout<<i;
	
 }
 
