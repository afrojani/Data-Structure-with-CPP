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

    node *createNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void insertionAtHead(int value)
    {
        node *a = createNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    void printTheList()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
};

int main()
{
    LinkedList l;
    l.insertionAtHead(5);
    l.insertionAtHead(12);
    l.insertionAtHead(15);
    l.printTheList();
    l.insertionAtHead(0);
    l.printTheList();
    return 0;
}