#include<bits/stdc++.h>
using namespace std;
    class Node{
      public:
         int val;
          Node *next;
            Node(int val){
                this->val =  val;
                  this->next = NULL;
            }
    };
      void insert(Node *&head,int val){
           Node * newNode =  new Node(val);
             if(head == NULL){
                  head =  newNode;
                   return;
             };
              Node *tmp = head;
                while (tmp->next != NULL)
                {
                      tmp =  tmp->next;
                };
                 tmp->next = newNode;
     };
       
       int size(Node *head){
          Node *tmp =  head; 
       int count = 0;
        while (tmp != NULL)
        {
             count++;
             tmp =  tmp->next;
        };
           return count;
       };
       
   void duplicate(Node *head){
        Node *tmp = head;
          bool flag =  false;
         for(int i = 1; i<=size(head); i++ ){
                 Node *tmp2 =  tmp->next;
                for(int j = i+1; j<=size(head); j++){
                         if(tmp->val == tmp2->val){
                               flag = true;
                         };
                          tmp2 = tmp2->next;
                };
                 tmp =  tmp->next;
         };
    if(flag == true){
         cout<<"YES"<<endl;
    }else{ 
         cout<<"NO"<<endl;
    };
   };
    
 int main(){
        Node *head =  NULL;
         while (true)
         {
             int val; cin>>val;
              if(val == -1) break;
              insert(head,val);
         };
          duplicate(head);
     return 0;
 }