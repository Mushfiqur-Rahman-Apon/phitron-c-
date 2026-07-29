#include<bits/stdc++.h>
using namespace std;
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
};

void insert_at_any_pos(Node* &head, int idx,int val)
{
    Node* newnode = new Node(val);
    Node* tmp = head;
    {
        for(int i=0;i<idx-1;i++)
        {
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
    }
}
void print_forward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL);

};
int main()
{   
    Node* head = NULL;
    Node* tail = NULL;



    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_any_pos(head,10,100);
    }
    print_forward(head);
    return 0;
} 
