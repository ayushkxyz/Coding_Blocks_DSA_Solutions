#include<iostream>
#include<cstring>
using namespace std;
bool compare(char a[],char b[]){
     int i=0,j=0;
     while(i<strlen(a)&&j<strlen(b)){
         if(a[i]!=b[j]){
             return false;}
             i++;
             j++;
         
     }
     if(a[i]=='\0'&&b[j]=='\0'){
         return true;
     }
     else{
         return false;
     }

}
int main(){
   char a[100];
   char b[100];
   cin.getline(a,100);
   cin.getline(b,100);
   int aa=strcmp(a,b);
   /*
   bool ans= compare(a,b);
   */
   if(aa==0){
       cout<<"equal";
   }
   else{
       cout<<"Not Equal";
   }
}
