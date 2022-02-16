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
int Print(node*head,int k){
	  node*slow=head,*fast=head;
	  int i=0;
	  while(i<k){
		  fast=fast->next;
		  i++;
	  }
	  while(fast!=NULL){
		  slow=slow->next;
		  fast=fast->next;
	  }
	  return slow->data;
		  
	  
}
  

int main(){
    node*head=NULL;
     
     insert_end(head);
	 int k;
	 cin>>k;
    cout<<Print(head,k);
}
