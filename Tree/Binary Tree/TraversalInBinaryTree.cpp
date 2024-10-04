#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

Node *buildTree(Node *root)
{
    int data;
    cout << "Enter data: " << endl;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return nullptr;
    }
    cout << "Enter to inserting of the left: " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter to inserting of the right: " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void preorderTraversal(Node *root)
{
   if(root == nullptr){
    return;
   }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorder(Node* root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder(Node* root){
    if(root == nullptr){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node *root = nullptr;
    root = buildTree(root);
    preorderTraversal(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
}