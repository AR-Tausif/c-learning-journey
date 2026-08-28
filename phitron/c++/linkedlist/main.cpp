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
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << ": Forwarded" << endl;   
}

void print_backward(Node* tail)
{
    Node* temp = tail;
    while(temp!= NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << ": Backwarded";
}

void insert_new_node(Node* &head, Node* &tail, int val)
{
    Node* new_node = new Node(val);
    if(tail==NULL)
    {
        tail = new_node;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
    
}


void insert_on_tail(Node* &head, Node* &tail, int val)
{
    Node* new_node = new Node(val);
    if(head == NULL)
    {
        head = new_node;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(50);
    // connecting the nodes
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;
    // in head
    insert_new_node(head, tail, 1200);
    insert_new_node(head, tail, 1300);
    insert_on_tail(head, tail, 660);
    // insert in tail
    print_forward(head);
    print_backward(tail);
    return 0; 
}