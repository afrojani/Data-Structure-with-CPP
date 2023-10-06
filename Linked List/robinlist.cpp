#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *c = new Node(30);

    head->next = a;
    a->next = c;

    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->data << endl;
        tmp = tmp->next;
    }

    return 0;
}