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
            Node *newNode = new Node(val);

             if(head == NULL){
                  head =  newNode;
                   return;
             };
         Node *tmp  = head;
       while (tmp->next != NULL)
       {
            tmp = tmp->next;
       };
       tmp->next =  newNode;
      };
         
          void head_insert(Node *&head , int val){
                Node *newNode =  new Node(val);
                    newNode->next = head;
                       head = newNode;
          };
           
          void insert_at_any_position(Node *&head,int pos,int val){

                if(pos == 1){
                        head_insert(head,val) ;
                        return;
                    };

                 Node *newNode = new Node(val);

                //  if(head == NULL){
                //      head = newNode;
                //       return;
                //  };

                   Node *tmp =  head;
                  for(int   i = 1 ; i<pos-1; i++){
                            tmp =  tmp->next;  
                  };
                  newNode->next = tmp->next;
                   tmp->next = newNode;
          };

           void head_delete(Node *&head){
               Node *deleteNode = head;
                  head =  head->next;
                  delete deleteNode;
                  return;
             
           };
            
             void delete_from_position(Node *&head, int pos){
                    if(pos == 1){
                           head_delete(head);
                           return;
                    };
                     
                    Node *tmp = head;
                     for(int i =  1; i<pos-1; i++){
                         tmp =  tmp->next;
                     };
                     Node *deleteNode = tmp->next;
                      tmp->next = tmp->next->next;
                      delete deleteNode;
             };

            int length(Node *head){
               Node *tmp =  head;
                 int count  = 0; 
                  while (tmp != NULL)
                  {
                     count++;
                     tmp = tmp->next;
                  };
                  return count;
                  
            };
             

         void print(Node *head){
                Node *tmp =  head;
                  while (tmp != NULL)
                  {
                     cout<<tmp->val<<endl;
                      tmp =  tmp->next;
                  }
                  
         };
          
 int main(){
         Node *head = NULL;
              while (true)
              {
                cout<<"opctaion 1 :  insert at tail"<<endl;
                cout<<"opcation 0 : Exit "<<endl;
                cout<<"opcation 2 print "<<endl;
                 cout<<"opcation 3 insert any position"<<endl;
                  cout<<"opcation 4 head insert"<<endl;
                   cout<<"opcation  5 : length"<<endl;
                    cout<<"opcation 6: delete form position"<<endl;
            int op;
             cin>>op;
                   if(op == 1){
                      int val;
                        cout<<"Your Value = ";
                       cin>>val;
                         if(val == -1){
                            break;
                         };
                     insert(head,val);

                   }else if(op == 0){
                       break;
                   }else if(op == 2){
                     print(head);
                   }else if(op == 3){
                       int pos,val;
                         int len =  length(head);
                         cout<<"position = ";
                         cin>>pos;
                          if(len >= pos){
                          cout<<"value =";
                           cin>>val;
                           insert_at_any_position(head,pos,val);
                          }else{
                             cout<<"Invalid position"<<endl;
                          }

                   }else if(op == 4){
                     int val; 
                      cout<<"value input = ";
                     cin>>val;
                     head_insert(head,val);
                   }else if(op ==  5){
                      cout<<length(head)<<endl;
                   }else if(op == 6){
                       int pos;
                        cout<<"position = ";
                         cin>>pos;
                        delete_from_position(head,pos);
                   }
               
              }
              
     return 0;
 }