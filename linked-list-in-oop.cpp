#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
        Node* prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};


class DoublyLinkedList {
    Node* head;
    Node* tail;
    
    public:
        DoublyLinkedList()
        {
            head = tail = NULL;
        }

        void push_front(int val)
        {
            Node* newNode = new Node(val);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else{
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }
        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                newNode->prev = tail;
                tail->next = newNode;
                tail = newNode;
            }
        }
        void pop_front()
        {
            if(head == NULL)
            {
                cout << "DLL is empty now!";
                return;
            }
            // store the deleting node
            Node* deleteNode = head;
            // change head position
            head = head->next;
            // check if head and tail same then tail will be NULL also
            if(head == NULL)
            {
                tail = NULL;
            }
            // delete the deleteNode
            delete deleteNode;
            // make head previous NULL
            head->prev = NULL;
        }
        void pop_back()
        {
            if(head == NULL)
            {
                cout << "DLL is empty now!";
                return;
            }
            Node* deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL)
            {
                head = NULL;
                return;
            }
            delete deleteNode;
            tail->next = NULL;
        }
        void print()
        {
            Node* temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " <=> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
        void input()
        {
            int val;

            while(true)
            {
                cin >> val;
                // trick: '-1' is a trick for stop the loop
                if(val == -1)
                {
                    break;
                }
                push_back(val);
            }
        }
    };
int main()
{
    DoublyLinkedList dll;
    // input formate should be `10 20 30 40 50 -1` (-1 included for stop the loop)
    dll.input();
    dll.pop_front();
    dll.print();
    return 0;
}