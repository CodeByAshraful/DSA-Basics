#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        // Count current size
        int size = 0;
        for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
            size++;

        if (X < 0 || X > size)
        {
            cout << "Invalid" << endl;
            print_forward(head);
            print_backward(tail);
            continue;
        }

        Node *newnode = new Node(V);

        if (head == NULL) // empty list
        {
            head = tail = newnode;
        }
        else if (X == 0) // insert at head
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
        else if (X == size) // insert at tail
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        else // insert at middle
        {
            Node *tmp = head;
            for (int i = 0; i < X - 1; i++)
                tmp = tmp->next;

            newnode->next = tmp->next;
            newnode->prev = tmp;
            tmp->next->prev = newnode;
            tmp->next = newnode;
        }

        print_forward(head);
        print_backward(tail);
    }
    return 0;
}
