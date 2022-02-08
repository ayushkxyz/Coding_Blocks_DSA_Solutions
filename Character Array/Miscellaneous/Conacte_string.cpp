#include<iostream>
#include<cstring>
void concate(char a[],char b[]){
    int i=strlen(a);
    int j=0;
    while(j<strlen(b)){
        a[i]=b[j];
        i++;
        j++;
    }
}
using namespace std;
int main(){
    char a[100];
    char b[100];
    cin.getline(a,100);
    cin.getline(b,100);
     concate(a,b);
     /*
     we can also use inbuilt fnc strcat*/
     cout<<a<<endl;
     

}
