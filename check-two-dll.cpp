#include<iostream>
using namespace std;
class Node {
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
void insert_new_node(Node*& tail, int data)
{
    cout << "inserting a new node " << endl;
    Node* tmp = tail;
    Node* new_node = new Node(data);
    tmp->next = new_node;
    new_node->prev = tmp;
    tail = new_node;

}
void print_forward(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " <=> ";
        tmp = tmp->next;
    }
    cout << "NULL : Forwarded" << endl;
}

void taking_input(Node* tail)
{
    int val;
    while (true) // infinite run the loop
    {
        cout << "value storing..";
        cin >> val;
        if(val == -1) // termination condition of this loop
        {
            cout << "terminating loop..";
            break;
        }
        insert_new_node(tail, val);
    }
    
}
int main()
{
    Node* head = new Node(10);
    Node* tail = new Node(20);
    head->next = tail;
    tail->prev = head;
    insert_new_node(tail, 20);
    taking_input(tail);
    print_forward(head);
    return 0;
}