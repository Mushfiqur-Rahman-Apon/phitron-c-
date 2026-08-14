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

int count_leaf_nodes(Node* root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    int left_count = count_leaf_nodes(root->left);
    int right_count = count_leaf_nodes(root->right);
    return left_count + right_count;
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
    int leaf_count = count_leaf_nodes(root);
    cout << leaf_count << endl;
    return 0;
}