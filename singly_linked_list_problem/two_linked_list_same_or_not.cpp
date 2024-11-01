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
            int count =  0; 
            while (tmp != NULL)
            {
                count++;
                 tmp =  tmp->next;
            };
            return count;
     };
      
            void same_or_not(Node *head, Node *head2){
                    Node *tmp =  head;
                     Node *tmp2 =  head2;
                      bool  flag =  true;

                     if(size(tmp) == size(tmp2)){
                             while (tmp!= NULL && tmp2 != NULL)
                             {
                                 if(tmp->val != tmp2->val){
                                     flag = false;
                                     break;
                                 };
                                 tmp =  tmp->next;
                                  tmp2 =  tmp2->next;
                             }
                             
                     }else{
                         flag =  false;
                     }

                     if(flag == true){
                          cout<<"YES"<<endl;
                     }else{
                         cout<<"NO"<<endl;
                     }
            }

 int main(){
        Node *head = NULL;
         Node *head2 = NULL;

          while (true)
          {
             int val;
              cin>>val; 
               if(val == -1) break;
               insert(head,val);
          };

            while (true)
          {
             int val;
              cin>>val; 
               if(val == -1) break;
               insert(head2,val);
          };

   same_or_not(head,head2);
     return 0;
 }