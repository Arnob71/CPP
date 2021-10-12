#include<bits/stdc++.h>

using namespace std;

struct Node {
   int data;
   Node *next;
   Node *prev;
};
Node* create_node(Node *node, int data)
{

    Node* new_node=new Node;
    if(new_node==NULL)
    {
      cout<<"OVERFLOW"<<endl;
      exit(1);
    }
      new_node->data=data;
      new_node->next=node;

return new_node;
}
void insert_begining( Node** head, int new_data)
{
   struct Node* newNode = new Node;
   newNode->data=new_data;
   newNode->next=(*head);
   newNode->prev=NULL;
   if ((*head)!=NULL)
   (*head)->prev=newNode;
   (*head)=newNode;
}
void linkedlist(struct Node* node) {
   struct Node* last;
   while (node!=NULL) {
      cout<<node->data<<endl;
      last=node;
      node=node->next;
   }
   }
  int main() {
   struct Node *head=NULL;
    Node *n1, *n2, *n3, *n4, *n5;
    n1=create_node(head, 10);
    head=n1;
    n2=create_node(head->next, 20);
    head->next=n2;
    n3=create_node(n2->next, 30);
    n2->next=n3;
    n4=create_node(n3->next, 40);
    n3->next=n4;
    n5=create_node(n4->next, 50);
    n4->next=n5;
    cout<<"This is a program to insert at beginning of a doubly linked list using function"<<endl;
    cout<<"Before inserting at the beginning"<<endl;
    linkedlist(head);
    cout<<"After inserting at the beginning"<<endl;
    insert_begining(&head, 100);
    linkedlist(head);
   return 0;
}
