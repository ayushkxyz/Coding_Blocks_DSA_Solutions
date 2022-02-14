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
void delete_before(node* &head,int key){
    node*temp=head,*follow,*prev;
      if(head==NULL){return ;}
      if(head->next->data==key){
          node*t=head;
          head=head->next;
          delete(t);
     }
     else{
         while(temp!=NULL&&temp->data!=key){
             prev=follow;
             follow=temp;
             temp=temp->next;
         }
    if(temp==NULL){
        cout<<"invalid\n";
    }
    else{
        prev->next=temp;
        delete(follow);
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
     delete_before(head, n);
     Print(head);
}
