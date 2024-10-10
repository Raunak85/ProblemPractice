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
    //Direct print method
// void levelOrderTraversal(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     while(!q.empty()){
//         Node* temp = q.front();
//         cout<<temp->data<<" ";
//         q.pop();
//         if(temp->left){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//     }
// }


void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int leafNodeCount(Node* root,int &count){
    if(root == nullptr) return 0;
    if(root->left == nullptr && root->right == nullptr){
        count++;
    }
    leafNodeCount(root->left,count);
    leafNodeCount(root->right,count);
    return count;
}

int main()
{
    Node *root = nullptr;
    root = buildTree(root);
    // levelOrderTraversal(root);
    int count = 0;
    cout<<leafNodeCount(root,count);
}