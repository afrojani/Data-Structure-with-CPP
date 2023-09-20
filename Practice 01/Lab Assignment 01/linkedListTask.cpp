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
    // Creates a new node with data = value and nxt = NULL
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    int size = 0;
    // insert new value at head
    void InsertAtHead(int value)
    {
        size++;
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        // if head is not NULL
        a->nxt = head;
        head = a;
    }

    int getSize()
    {
        return size;
    }
    // returns the value for a given index.
    int getValue(int index)
    {
        if (index >= size)
        {
            return -1;
        }
        node *a = head;
        int i = 0;
        while (a != NULL)
        {
            if (i == index)
            {
                return a->data;
            }
            a = a->nxt;
            i++;
        }

        return 0;
    }
    // prints the linked list in reverse order.
    void recursiveFunction(node *a)
    {
        if (a == NULL)
            return;

        recursiveFunction(a->nxt);
        cout << a->data << " ";
    }

    void printReverse()
    {
        node *a = head;
        recursiveFunction(a);
        cout << "\n";
    }

    // prints the linked list
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
    // swaps the first two elements of the linked list.
    void swapFirst()
    {
        if (size >= 2)
        {
            int tmp = 0;
            node *a = head;
            node *b = a->nxt;
            tmp = a->data;
            a->data = b->data;
            b->data = tmp;
        }
    }
};

int main()
{
    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) << "\n";

    cout << l.getValue(6) << "\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}