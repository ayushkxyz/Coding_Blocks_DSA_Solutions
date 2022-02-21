#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Car{
    public:
  string car_name;
  int x,y;
  int dis;
  Car(string name,int x,int y){
       car_name=name;
       this->x=x;
       this->y=y;
       }
};
bool compare(Car a,Car b){
     if(a.dis==b.dis){
         return a.car_name<b.car_name;
     }
     return a.dis<b.dis;
}
int main(){
    int n;
    cin>>n;
    vector<Car>a;
    int i=0;
    while(i<n){
        int x,y;
        string name;
        cin>>x>>y>>name;
        Car c(name,x,y);
        c.dis=(x*x)+(y*y);
        a.push_back(c);
        i++;
    }
    sort(a.begin(),a.end(),compare);
    for(int i=0;i<n;i++){
        cout<<a[i].dis<<" "<<a[i].car_name<<endl;
    }
    return 0;
}
