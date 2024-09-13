
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Parameterized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    // node4->next = NULL;

    cout << node1->next->next->next->data << endl;

    cout << "Size of Linked List: " << size(node1) << endl;
    // Displaying the Linked List
    cout << "Linked List is: " << endl;
    display(node1);

    return 0;
}