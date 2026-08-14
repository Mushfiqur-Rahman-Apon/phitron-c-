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

void sum_without_leaf(Node* root, int &sum)
{
    if(root == NULL) return;
    if(root->left != NULL || root->right != NULL)
    {
        sum += root->val;
    }
    sum_without_leaf(root->left, sum);
    sum_without_leaf(root->right, sum);
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
    int sum = 0;
    sum_without_leaf(root, sum);
    cout << sum << endl;
    return 0;
}