#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // In case of Default:when object create krenge then call hoga
    Node()
    {
        cout << "I am inside default ctor" << endl;
        this->next = NULL;
    }

    // In case of Parameterized : when object create krenge then call hoga
    Node(int data)
    {
        // cout << "I am inside Parameterized ctor" << endl;
        this->data = data;
        this->next = NULL;
    }
};

// printing LL
void printLL(Node *head)
{

    // creating temp pointer
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// Printing lenght of LL

void printLenghtLL(Node *head)
{
    int length;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    cout << "Lenght of LL : " << length << endl;
}

int main()
{
    // creation of Node
    // Node a;
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    // connecting nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // creating head
    Node *head = first;
    cout << "Printing Entire LL : ";
    printLL(head);
    cout << "Printing Lenght : ";
    printLenghtLL(head);
}