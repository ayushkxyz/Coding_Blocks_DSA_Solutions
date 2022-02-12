#include<iostream>
using namespace std;
int paths(int s,int e){
    if(s>e){
        return 0;
    }
    if(s==e){return 1;}
    int i=1;
    int way=0;
    while(i<=6){
        way=way+paths(s+i,e);
        i++;
    }
    return way;
}
int main(){
    int s,e;
    cin>>s>>e;
    cout<<paths(s,e)<<endl;

}
