#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node*prev;
    
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
void print_forward(Node*head)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_backward(Node*tail)
{
    Node*tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
void reverse_print(Node*head,Node*tail)
{
    for(Node*i=head,*j=tail; i!=j && j!=i->prev; i=i->next,j=j->prev)
    {
        swap(i->val,j->val);

    }
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;
    print_forward(head);
    reverse_print(head,tail);
    print_forward(head);
   
    
    return 0;
}