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
node* delete_mid(node* head,int pos){
     if(head==NULL){
         return head;
     }
     if(pos==0){
         node*temp=head;
         head=head->next;
          delete(temp);
          return head;
     }
     head->next=delete_mid(head->next,pos-1);
     return head;


}
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
     cout<<"enter the position \n";
     int pos;
     cin>>pos;
     delete_mid(head,pos);
     Print(head);
}
