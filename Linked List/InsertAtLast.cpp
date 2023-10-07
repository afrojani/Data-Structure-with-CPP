#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
};

class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }

    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    void InsertAtBack(int value)
    {
        node *a = head;
        node *b = CreateNewNode(value);
        while (a->nxt != NULL)
        {
            a = a->nxt;
        }
        a->nxt = b;
        return;
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(12);
    l.InsertAtHead(20);
    l.InsertAtHead(9);
    l.InsertAtHead(4);
    l.Traverse();
    l.InsertAtBack(1);
    l.Traverse();

    return 0;
}