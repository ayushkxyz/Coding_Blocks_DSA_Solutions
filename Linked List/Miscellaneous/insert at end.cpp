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
void insert_end(node* &head){
       int d;
       cin>>d;
       node*follow;
       while(d!=-1){
           if(head==NULL){
               head=new node(d);
               follow=head;
           }
          else{
            follow->next=new node(d);
            follow=follow->next;
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
     cout<<"enter the Elements \n";
     insert_end(head);
     Print(head);
}
