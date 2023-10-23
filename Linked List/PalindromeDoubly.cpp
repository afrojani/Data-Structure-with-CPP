#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prv;
    node *nxt;
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

    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->prv = NULL;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        node *b = head;
        a->nxt = b;
        b->prv = a;
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

    int getSize()
    {
        return sz;
    }

    int Palindrome()
    {
        node *a = head;
        node *b = head;
        int cur_idx = 0;
        while (cur_idx != sz - 1)
        {
            b = b->nxt;
            cur_idx++;
        }

        while (a != NULL && b != NULL)
        {
            if (a->data != b->data)
            {
                return 0;
            }
            a = a->nxt;
            b = b->prv;
        }
        return 1;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(1);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);
    dl.InsertAtHead(3);
    dl.InsertAtHead(1);
    dl.Traverse();
    int palindrome = dl.Palindrome();
    if (palindrome == 0)
    {
        cout << "False\n";
    }
    else
    {
        cout << "True\n";
    }

    return 0;
}