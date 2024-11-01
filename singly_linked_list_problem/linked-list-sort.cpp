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
          void sort(Node *head){
             Node *tmp = head;
              for(int i = 1;i<=size(head);i++){
                Node *tmp2 =  tmp->next;
                for(int j =  i+1; j<= size(head);j++){
                     if(tmp->val > tmp2->val){
                           int tmpo = tmp->val;
                            tmp->val = tmp2->val;
                             tmp2->val = tmpo;
                     };
                      tmp2 =  tmp2->next;
                };
                tmp =  tmp->next;
              }            
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
     print(head);
     cout<<endl;
      sort(head);
       print(head);

     return 0;
 }