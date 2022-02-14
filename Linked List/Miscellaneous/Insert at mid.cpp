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
void insert_mid(node*&head,int elem,int pos){
      node*n=new node(elem);
      node*temp=head;
            if(pos==0){
                n->next=head;
                head=n;
                }

            else{
             int i=0;
             while(temp!=NULL&&i<pos-1){
                 temp=temp->next;
                 i++;
             }
             if(temp==NULL){
                 cout<<"invalid pos\n";
             }
             else{
                 node*follow=temp->next;
                 temp->next=n;
                 n->next=follow; 
            }  
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
     
     cout<<"enter the elem you want to insert\n";
     int n;
     cin>>n;
     cout<<"enter the pos\n";
     int pos;
     cin>>pos;
     insert_mid(head,n,pos);
     Print(head);
}
