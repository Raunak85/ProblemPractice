#include <iostream>
#include<queue>
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

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
int main()
{
    Node *root = nullptr;
    root = buildTree(root);
    levelOrderTraversal(root);
}