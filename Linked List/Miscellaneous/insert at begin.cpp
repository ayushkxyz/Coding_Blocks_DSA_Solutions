#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};
void Inserttbegin(node* &head){
    int d;
    cin>>d;
       while( d!=-1){
           if(head==NULL){
               head=new node(d);
           }
           else{
               node*n=new node(d);
               n->next=head;
               head=n;
           }
           cin>>d;
       }
}
void Print(node*head){
     while(head!=NULL){
         cout<<head->data<<" ";
         head=head->next;
     }
}
int main(){
     node*head=NULL;
     cout<<"Enter the elements to be inserted\n";
     Inserttbegin(head);
     Print(head);
}
