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
    node *createNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        sz++;
        node *a = createNewNode(value);
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

    int getSize()
    {
        return sz;
    }

    void RemoveTheLast()
    {
        if (head == NULL)
        {
            return;
        }

        node *a = head;
        int idx = 0;
        while (idx < sz)
        {
            a = a->nxt;
            idx++;
        }
        delete a;
        sz--;
        node *b = head;
        int idx1 = 0;
        while (idx1 < sz - 1)
        {
            idx1++;
            b = b->nxt;
        }
        b->nxt = NULL;
    }

    // void RemoveTheLast()
    // {
    //     if (head == NULL)
    //     {
    //         return;
    //     }

    //     if (sz == 1)
    //     {
    //         delete head;
    //         head = NULL;
    //         sz = 0;
    //         return;
    //     }

    //     node *a = head;
    //     int idx = 0;
    //     while (idx < sz - 2) // Traverse to the second-to-last node
    //     {
    //         a = a->nxt;
    //         idx++;
    //     }

    //     // Delete the last element
    //     delete a->nxt;

    //     // Update the new last element and size
    //     a->nxt = NULL;
    //     sz--;
    // }

    // void RemoveTheLast()
    // {
    //     if (head == NULL)
    //         return;

    //     if (sz == 1)
    //     {
    //         delete head;
    //         head = NULL;
    //         sz = 0;
    //         return;
    //     }

    //     node *current = head;
    //     node *previous = NULL;

    //     while (current->nxt != NULL)
    //     {
    //         previous = current;
    //         current = current->nxt;
    //     }

    //     delete current;
    //     previous->nxt = NULL;
    //     sz--;
    // }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(3);
    l.InsertAtHead(2);
    l.InsertAtHead(1);
    l.Traverse();
    cout << l.getSize() << "\n";
    l.RemoveTheLast();
    l.Traverse();
    l.RemoveTheLast();
    l.Traverse();
    l.RemoveTheLast();
    l.Traverse();
    return 0;
}