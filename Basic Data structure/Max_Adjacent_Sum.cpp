#include<bits/stdc++.h>
using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* left;
//         Node* right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// void sum_without_leaf(Node* root, int &sum)
// {
//     if(root == NULL) return;
//     if(root->left != NULL || root->right != NULL)
//     {
//         sum += root->val;
//     }
//     sum_without_leaf(root->left, sum);
//     sum_without_leaf(root->right, sum);
// }
int main()
{   
   int n;
   cin >> n;
   vector<int> arr(n);

   for (int i=0;i<n;i++)
   {
    cin >> arr[i];

   }
   for (int i=0;i<n;i++)
   {
    cout << arr[i];

   }
    return 0;
}