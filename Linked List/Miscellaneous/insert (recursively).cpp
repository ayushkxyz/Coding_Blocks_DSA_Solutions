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
node* insert_mid(node*head,int elem,int pos){
    if(head==NULL){
        return head;
    }
    if(pos==0){
        node*n=new node(elem);
         n->next=head;
         return n;
    }
   head->next=insert_mid(head->next,elem,pos-1);
   return head;
    
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
     
     cout<<"enter the elem you want to insert\n";
     int n;
     cin>>n;
     cout<<"enter the pos\n";
     int pos;
     cin>>pos;
     head=insert_mid(head,n,pos);
     Print(head);
}
