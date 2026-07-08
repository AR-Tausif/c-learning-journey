#include<iostream>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next= NULL;
    }
};

void print_forward(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
}

int main ()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;

    a->next = tail;
    print_forward(head);
    return 0;
}