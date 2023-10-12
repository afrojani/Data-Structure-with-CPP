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
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
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
        sz++;
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    int getSize()
    {
        return sz;
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

    void InsertionSort()
    {
        node *current = head;
        node *prev = NULL;
        int i = 0;
        while (i < sz)
        {
            while (current->nxt != NULL)
            {
                prev = current;
                current = current->nxt;
                if (prev->data > current->data)
                {
                    node *tmp;
                    tmp = prev->nxt;
                    prev->nxt = current->nxt;
                    current->nxt - tmp;
                }
                else
                {
                    break;
                }
            }
        }
        return;
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(99);
    l.InsertAtHead(49);
    l.InsertAtHead(35);
    l.InsertAtHead(22);

    l.Traverse();
    cout << l.getSize() << "\n";
    l.InsertionSort();
    l.Traverse();
    return 0;
}