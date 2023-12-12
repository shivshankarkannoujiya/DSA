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

// Printing the LL
void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        // cout << temp->next << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// Inserting at Tail
void insertAtTail(Node *&head, Node *&tail, int data)
{

    // empty LL case
    if (head == NULL)
    {

        // step1:create new node
        Node *newNode = new Node(data);
        // step2:head and tail to newNode pr poiint kra denge bcz single node hoga
        head = newNode;
        tail = newNode;
    }
    // 1 . Create new node
    Node *newNode = new Node(data);
    // 2 .  points tail ka newt to new node
    tail->next = newNode;
    // 3 .  update tail
    tail = newNode;
}

int main()
{

    // Creating node
    Node *first = new Node(10);
    Node *sec = new Node(20);
    Node *third = new Node(30);

    first->next = sec;
    sec->next = third;

    // creating head & tail
    Node *head = first;
    Node *tail = third;

    cout << "Printing Original LL " << endl;
    printLL(head);
    cout << "Printing LL after insertion :  " << endl;
    insertAtTail(head, tail, 50);
    printLL(head);
}