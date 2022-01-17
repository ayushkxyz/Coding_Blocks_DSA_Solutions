 #include<iostream>
using namespace std;
int main(){
char ch;
int n1,n2;

while(1){
	cin>>ch;
	switch(ch){
		case '+':
		cin>>n1>>n2;
		cout<<n1+n2<<endl;
		break;
		case'-':
		cin>>n1>>n2;
		cout<<n1-n2<<endl;
		break;
		case '*':
		cin>>n1>>n2;
		cout<<n1*n2<<endl;
		break;
		case '/':
		cin>>n1>>n2;
		cout<<n1/n2<<endl;
		break;
		case '%':
		cin>>n1>>n2;
		cout<<n1%n2<<endl;
		break;
		case 'x':
		 return 0;
		case 'X':
		return 0;
		default:
		cout<<"Invalid operation. Try again.\n";
		break;


	}
	
}
}


	
