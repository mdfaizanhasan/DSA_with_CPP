//

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    // Data members
    int data;
    Node *next;

    // constructor
    Node(int val)
    {
        data = val;
        next = NULL;
    }

    // destructor
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

// insertion at head of the Linked List
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}

// insertion at tail of the Linked List
void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// insertion at middle of the Linked List
void insertAtMiddle(Node *&head, int val, int p)
{
    Node *n = new Node(val);
    Node *temp = head;
    int count = 0;
    while (count != p - 1)
    {
        temp = temp->next;
        count++;
    }
    n->next = temp->next;
    temp->next = n;
}

// Print the Size of the Linked List
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

// Display the Linked List
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
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);

    // Display the Linked List
    cout << "Linked List insert at head: " << endl;
    display(head);

    // insertion at tail of the Linked List
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    insertAtTail(head, 10);
    insertAtTail(head, 11);

    // Display the Linked List
    cout << "Linked List insert at tail: " << endl;
    display(head);

    // insertion at middle of the Linked List
    insertAtMiddle(head, 12, 3);
    insertAtMiddle(head, 13, 5);
    insertAtMiddle(head, 14, 6);
    insertAtMiddle(head, 15, 7);
    insertAtMiddle(head, 16, 8);

    // Display the Linked List
    cout << "Linked List insert at middle: " << endl;
    display(head);

    return 0;
}
