#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    void printOuterTree(Node* root)
    {
        if(root == NULL) return;
        cout << root->val << " ";
        if(root->left != NULL)
        {
            printOuterTree(root->left);
        }
        else if(root->right != NULL)
        {
            printOuterTree(root->right);
        }
        cout << root->val << " ";
        if(root->right != NULL)
        {
            printOuterTree(root->right);
        }
        else if(root->left != NULL)
        {
            printOuterTree(root->left);
        }
    

    }

    
};
int main()
{  
    int val;
    cin >> val;
    Node* head = new Node(val);
    queue<Node*> q;
    q.push(head);
    while(!q.empty())
    {
        Node* node = q.front();
        q.pop();
        int c1, c2;
        cin >> c1 >> c2;
        if(c1 != -1)
        {
            node->left = new Node(c1);
            q.push(node->left);
        }
        if(c2 != -1)
        {
            node->right = new Node(c2);
            q.push(node->right);
        }

    }
    head->printOuterTree(head);



    
    return 0;
}