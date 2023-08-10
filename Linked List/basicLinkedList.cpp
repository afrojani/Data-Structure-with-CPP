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

    node *head;

    LinkedList()
    {
        head = NULL;
    }
    // insert new value at head
    void InsertAtHead(int value)
    {
    }
    // prints the linked list
    void Traverse()
    {
    }
    // search for a single value
    void SearchDistinctValue(int value)
    {
    }
    // search all possible occurrence
    void SearchAllvalue(int value)
    {
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
    l.SearchDistinctValue(10);
    l.SearchDistinctValue(5);
    l.SearchAllvalue(30);
    return 0;
}