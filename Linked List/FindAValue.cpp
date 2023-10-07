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

    void SearchValue(int value)
    {
        node *a = head;
        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << "True"
                     << "\n";
                return;
            }
            a = a->nxt;
        }
        cout << "False"
             << "\n";
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
    l.SearchValue(22);
    l.SearchValue(40);
    return 0;
}