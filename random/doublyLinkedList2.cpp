#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    if(head != NULL)
    {
        head->prev = temp;
    }
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &head, int d)
{
    Node* temp = new Node(d);
    if(head == NULL)
    {
        head = temp;
        return;
    }
    Node* tail = head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = temp;
    temp->prev = tail;

}

void insertAtPos(Node* &head, int pos, int d)
{
    if(pos == 1)
    {
        Node* temp = new Node(d);
        if(head != NULL)
        {
            head->prev = temp;
        }
        temp->next = head;
        head = temp;
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos-1 && temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    Node* newNode = new Node(d);
    newNode->next = temp->next;
    if(newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void delAtPos(Node* &head, int pos)
{
    if (head == NULL)
    {
        return;
    }

    if (pos == 1)
    {
        Node* temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        delete temp;
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < pos && temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL)
    {
        cout << "Position out of bounds" << endl;
        return;
    }

    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}


Node* reverse(Node* &head)
{
    
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* prevNode = NULL;
    Node* currNode = head;

    
    while (currNode != NULL)
    {
        prevNode = currNode->prev;      
        currNode->prev = currNode->next; 
        currNode->next = prevNode;      

        currNode = currNode->prev;      
    }

    return prevNode->prev; 
}


void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);
    insertAtTail(head, 70);

    print(head);

    insertAtPos(head, 1, 10);

    print(head);

    insertAtPos(head, 3, 30);

    print(head);

    delAtPos(head, 1);

    print(head);

    delAtPos(head, 3);

    print(head);

    head = reverse(head);
    
    print(head);
}