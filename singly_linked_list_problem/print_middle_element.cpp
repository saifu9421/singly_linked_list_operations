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

        void print_middle_element(Node *head){
              Node *tmp = head;
               int x  = size(head);
               if(x %2 == 0){
                 int mid = (x/2);
           for(int i = 1;i< mid; i++){
             tmp =  tmp->next;
           };
                   cout<<tmp->val<<" "<<tmp->next->val<<endl;
               }else{
                 int mid = x/2;
                  for(int i = 1; i<mid;i++){
                     tmp = tmp->next;
                  };
                  cout<<tmp->next->val<<endl;
               }
                 
        }
        
 int main(){
        Node *head = NULL;
          while (true)
          {
             int val;
              cin>>val; 
               if(val == -1) break;
               insert(head,val);
          };
        print_middle_element(head);
     return 0;
 }