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
       
       void maximun_value(Node *head){
           Node *tmp =  head;
           int maxNumber =  INT_MIN;
             while (tmp != NULL)
             {
                 if(tmp->val > maxNumber){
                     maxNumber = tmp->val;
                 };
                  tmp = tmp->next;
             };
              cout<<maxNumber<<endl;
         
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
    maximun_value(head);
     return 0;
 }