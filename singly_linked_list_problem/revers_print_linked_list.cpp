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

      void print(Node *head){
          Node *tmp =  head;
           while (tmp != NULL)
           {
              cout<<tmp->val<<" ";
              tmp = tmp->next;
           };
                    
      };
       
      void reversPrint(Node *head){
           Node *tmp =  head;
             if(tmp == NULL) return;
            reversPrint(tmp->next);
             cout<<tmp->val<<" ";
      };

     
           
 int main(){
        Node *head = NULL;
          while (true)
          {
             int val;
              cin>>val; 
               if(val == -1) break;
               insert(head,val);
          };
  reversPrint(head);

     return 0;
 }