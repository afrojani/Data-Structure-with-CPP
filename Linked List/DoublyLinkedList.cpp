#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    node *CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    void Insert(int index, int value)
    {
        if (index > sz)
        {
            return;
        }
        if (index == 0)
        {
            InsertAtHead(value);
            return;
        }
        node *a = head;
        int cur_idx = 0;
        while (cur_idx != index - 1)
        {
            a = a->nxt;
            cur_idx++;
        }
        node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    void Delete(int index)
    {
        if (index >= sz)
        {
            cout << index << "doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_idx = 0;
        while (cur_idx != index)
        {
            a = a->nxt;
            cur_idx++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if (b != NULL)
        {
            b->nxt = c;
        }
        if (c != NULL)
        {
            c->prv = b;
        }
        delete a;
        if (index == 0)
        {
            head = c;
        }
        sz--;
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

    int getSize()
    {
        return sz;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(7);
    dl.InsertAtHead(3);
    dl.Traverse();
    dl.Insert(1, 99);
    dl.Traverse();
    cout << dl.getSize() << "\n";
    dl.Delete(2);
    dl.Traverse();

    return 0;
}