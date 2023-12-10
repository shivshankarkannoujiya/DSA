#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node()
    {
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// printing function
void printLL(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

// insertion function
void insetAtHead(Node *&head, Node *&tail, int data)
{
    // empty LL case
    if (head == NULL)
    {

        // 1.create new node
        Node *newNode = new Node(data);
        // 2.update head
        head = newNode;
        tail = newNode;
    }
    else
    {
        // Non-empty LL  case
        // 1. create new Node
        Node *newNode = new Node(data);
        // 2 . attach newNode to head
        newNode->next = head;
        // 3 . update head
        head = newNode;
    }
}

int main()
{
    // Node Creation
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->next = third;

    // head node
    Node *head = first;
    Node *tail = third;

    cout << "Printing Original LL : " << endl;
    printLL(head);
    cout << endl;
    cout << "Printing LL after insertion : " << endl;
    insetAtHead(head, tail, 500);
    printLL(head);
}