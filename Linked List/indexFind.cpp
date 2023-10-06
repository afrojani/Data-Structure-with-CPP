#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    Node *CreateNewNode(int value)
    {
        Node *newnode = new Node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        Node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    void Traverse()
    {
        Node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }

    int FindIndexValue(int idx)
    {
        Node *a = head;
        int index = 0;
        while (index != idx)
        {
            a = a->next;
            index++;
        }
        return a->data;
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(7);
    l.InsertAtHead(13);
    l.InsertAtHead(15);
    l.Traverse();
    cout << l.FindIndexValue(2) << "\n";
    return 0;
}