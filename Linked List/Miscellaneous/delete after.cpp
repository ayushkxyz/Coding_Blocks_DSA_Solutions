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
void delete_(node* &head,int key){
     
     if(head==NULL){return ;}
     else{
         node*temp=head;
         while(temp->next!=NULL&&temp->data!=key){
            temp=temp->next;
         }
        
         if(temp->next==NULL){
          cout<<"invalid\n";
         }
         else{
            node*t=temp->next;
            temp->next=t->next;
            delete(t);
         }
     }
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
     cout<<"enter the element\n";
     int n;
     cin>>n;
     delete_(head,n);
     Print(head);
}
