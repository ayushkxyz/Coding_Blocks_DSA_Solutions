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
void insert_before(node* &head,int elem,int key){
     node*n=new node(elem);
     if(head->data==key){
           n->next=head;
           head=n;
     }
     else {
         node*temp=head;
         node*follow;
         while(temp!=NULL&&temp->data!=key){
             follow=temp;
            temp=temp->next;
         }
         if(temp==NULL){
             cout<<"element not found\n";
         }
         else{
             follow->next=n;
             n->next=temp;
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
     cout<<"Emter the element before which you want to insert\n";
     int n;
     cin>>n;
     cout<<"enter the element to be inserted\n";
     int ele;
     cin>>ele;
     insert_before(head,ele,n);
     Print(head);
}
