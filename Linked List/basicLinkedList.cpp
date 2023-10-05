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

    // eta ekta constructor jeta linkedlist class er kichu primary value set kore.
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }
    // Creates a new node with data = value and nxt = NULL
    // eta ekta function jeta node return kore.
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    // insert new value at head
    void InsertAtHead(int value)
    {
        sz++;
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
    // search for a single value
    int SearchDistinctValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }
    // search all possible occurrence
    void SearchAllvalue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << value << " is found at index " << index << "\n";
            }
            a = a->nxt;
            index++;
        }
    }

    int getSize() /*
       ei function diye linked list er size
        ber korte O(1) complexity lage*/
    {
        return sz;
    }

    /*
        ei function diye linked list er size
         ber korte O(n) complexity lage
        int getSize()
        {
            int sz = 0;
            node *a = head;
            while (a != NULL)
            {
                sz++;
                a = a->nxt;
            }
            return sz;
        }
    */

    void insertAtAnyIndex(int index, int value)
    {
        if (index < 0 || index > sz)
        {
            return;
        }
        if (index == 0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    void deleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->nxt;
        delete a;
    }
    void deleteAnyindex(int index)
    {
        if (index < 0 || index > sz - 1)
        {
            return;
        }
        if (index == 0)
        {
            deleteAtHead();
            return;
        }
        sz--;
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }
    void insertAfterValue(int value, int data)
    {
        node *a = head;
        while (a != NULL)
        {
            if (a->data == value)
            {
                break;
            }
            a = a->nxt;
        }
        if (a == NULL)
        {
            cout << value << "is not found.";
            return;
        }
        sz++;
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    void reverseFunc(node *a)
    {
        if (a == NULL)
            return;

        reverseFunc(a->nxt);
        cout << a->data << " ";
    }

    void reversePrint()
    {
        reverseFunc(head);
        cout << "\n";
    }
};

int main()
{
    LinkedList l;

    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    l.Traverse();
    cout << l.getSize() << "\n";
    cout << "10 is found at " << l.SearchDistinctValue(10) << "\n";
    cout << "5 is found at " << l.SearchDistinctValue(5) << "\n";
    cout << "30 is found at " << l.SearchDistinctValue(30) << "\n";

    l.SearchAllvalue(30);
    l.insertAtAnyIndex(2, 99);
    l.Traverse();
    l.deleteAtHead();
    l.Traverse();
    cout << l.getSize() << "\n";
    l.deleteAnyindex(3);
    l.Traverse();
    cout << l.getSize() << "\n";
    l.insertAfterValue(20, 55);
    l.Traverse();
    cout << l.getSize() << "\n";
    l.reversePrint();
    return 0;
}