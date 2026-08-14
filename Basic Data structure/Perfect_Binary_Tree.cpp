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

};
void perfect_binary_tree(Node* root, int &count)
{
    if(root == NULL) return;
    if(root->left != NULL && root->right != NULL)
    {
        count++;
    }
    perfect_binary_tree(root->left, count);
    perfect_binary_tree(root->right, count);
}


int main()
{  
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
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
    int count = 0;
    perfect_binary_tree(root, count);
    if(count == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}