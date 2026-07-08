#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
    
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = new Node(100);
    Node* a = new Node(150);
    Node* b = new Node(200);
    Node* tail = new Node(250);

    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = tail;

    tail->prev =b;

    print_forward(head);
    return 0;
}