#include <bits/stdc++.h>
using namespace std;

// Node class to represent Tree Node
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/*
This function will build tree starting from left side
For Eg :
        2
      /   \
     4     5
    /
   6
To build this You have to give input like this :
2 4 6 -1(6 have no left child) -1(6 have no right child) -1(4 have no right child) 5 -1(5 have no left child) -1(5 have no left child)
*/
Node *buildTree(Node *root)
{
    int data;
    cout << "Enter data to be inserted, -1 for null\n";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    root = new Node(data);
    cout << "Enter data to be inserted on left of " << data << "\n";
    root->left = buildTree(root->left);
    cout << "Enter data to be inserted on right of " << data << "\n";
    root->right = buildTree(root->right);
    return root;
}

// InOrder Traversal
void inorderTraversal(Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
};

// PreOrder Traversal
void preorderTraversal(Node *root)
{
    if (root != NULL)
    {
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
};

// PostOrder Traversal
void postorderTraversal(Node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";
    }
};

// Level order traversal of Binary Tree
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        cout << curr->data << " ";
        q.pop();

        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout<<"\nLevel Order Traversal : ";
    levelOrderTraversal(root);
    cout<<"\nIn Order Traversal : ";
    inorderTraversal(root);
    cout<<"\nPre Order Traversal : ";
    preorderTraversal(root);
    cout<<"\nPost Order Traversal : ";
    postorderTraversal(root);
    return 0;
}