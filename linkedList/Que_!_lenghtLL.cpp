#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // ctor default
    Node()
    {
        this->next = NULL;
    }

    // Param ctor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// function for printing length
int getLength(Node *head)
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

int main()
{

    // creating Node
    Node *first = new Node(10);
    Node *sec = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = sec;
    sec->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // creating head
    Node *head = first;

    // calling function
    int length = getLength(head);
    cout << "Length of LL :  " << length << endl;
}