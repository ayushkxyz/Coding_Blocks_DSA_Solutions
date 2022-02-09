#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    /*
    if(s1==s2){
        cout<<"the strings are same\n";
    }
    else if(s1<s2){
        cout<<"s1 is smaller than s2\n";
    }
    else{
      cout<<"S1 is larger than s2\n";
    }
    */
   int a=s1.compare(s2);
   if(a==0){
       cout<<"the strings are same\n";
   }
    else if(a>0){
         cout<<"S1 is larger than s2\n";
    }
    else{
        cout<<"s1 is smaller than s2\n";
    }
}
