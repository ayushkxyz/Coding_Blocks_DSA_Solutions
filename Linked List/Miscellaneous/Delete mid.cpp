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
void delete_mid(node* &head,int pos){
    node*temp=head,*follow=head;
     if(head==NULL){
         return;
    }

    if(pos==0){
        node*n=head;
        head=head->next;
        delete(n);
    }
    else{
         int i=0;
         while(temp!=NULL&&i<=pos-1){
             follow=temp;
             temp=temp->next;
             i++;
         }
         if(temp==NULL){
              cout<<"pos invalid\n";
         }
         else{
             node*n=temp;
             follow->next=n->next;
             delete(n);
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
     cout<<"enter the position \n";
     int pos;
     cin>>pos;
     delete_mid(head,pos);
     Print(head);
}
