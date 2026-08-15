#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
    public:
        void printList(Node* head)
        {
            Node* temp = head;
            while(temp != NULL)
            {
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};



int main()
{  
    int n;
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return 0;
}