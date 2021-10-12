#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node* create_node(Node* node,int data)
{
    Node* new_node=new Node;
    if(new_node==NULL)
    {
      cout<<"Overflow"<<endl;
      exit(1);
    }
    new_node->data=data;
    new_node->next=node;

    return new_node;
}
void deletenode(Node* head, Node *node)
{
    Node* ptr=head,*save;
    while(ptr!=node)
    {
      save=ptr;
      ptr=ptr->next;
    }
    save->next=node->next;

return;
}
void linkedlist(Node* head)
{
    Node *ptr=head;
    while(ptr!=NULL)
    {
      cout<<ptr->data<<endl;
      ptr=ptr->next;
    }

return;
}
int main()
{
    Node *head=NULL;
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
    cout<<"This is a program to delete the last element of a linked list using function\n"<<endl;
    cout<<"Linked list before deleting last element"<<endl;
    linkedlist(head);
    cout<<"Linked list after deleting last element"<<endl;
    deletenode(head,n5);
    linkedlist(head);
return 0;
}
