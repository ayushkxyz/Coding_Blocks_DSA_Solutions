#include<iostream>
#include"treenode.h"
#include<queue>
using namespace std;
Treenode<int>*takeinput(){
    cout<<"Enter the root element\n";
    int rootdata;
    cin>>rootdata;
    Treenode<int>*root=new Treenode<int>(rootdata);
    queue<Treenode<int>* >pending;
    pending.push(root);
    while(pending.size()!=0){
        cout<<"enter the number of children of "<<pending.front()->data<<endl;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int data;
            cout<<"enter the "<<i<<"th child of "<<pending.front()->data<<endl;
            cin>>data;
            Treenode<int>*r=new Treenode<int>(data);
            pending.push(r);
            pending.front()->children.push_back(r);
        }
        pending.pop();
    }
    return root;
}

 void print(Treenode<int>* root) {
    if(root==NULL){
        return ;
    }
    // Write your code here
    queue<Treenode<int>* >pending;
    pending.push(root);
   
    while(pending.size()!=0){
         Treenode<int>*temp=pending.front();
         cout<<temp->data<<":";
        int i=0;
        
        int numchild=pending.front()->children.size();
        for(;i<numchild;i++){
            if(i==numchild-1){
            cout<<temp->children[i]->data;
        }
            else{
                cout<<temp->children[i]->data<<",";
            }
        pending.push(temp->children[i]);
    }
        cout<<endl;
        pending.pop();
      
    }
    
}



 int main(){
  Treenode<int>*root= takeinput();
  print(root);

}
