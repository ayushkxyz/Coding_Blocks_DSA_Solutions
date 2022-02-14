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
void insert_after(node*&head,int elem,int key){
    node*n=new node(elem);
    if(head==NULL){
        return ;
    }
    node*temp=head;
    while(temp!=NULL&&temp->data!=key){
        temp=temp->next;
    } if(temp!=NULL){ 
           node*t=temp->next;
       temp->next=n;
       n->next=t;
    }
    else{
         cout<<"element not found\n";
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
     cout<<"enter the elements after which you want to insert\n";
     int n;
     cin>>n;
     cout<<"enter the element you want to insert\n";
     int el;
     cin>>el;
     insert_after(head,el,n);

     Print(head);
}
