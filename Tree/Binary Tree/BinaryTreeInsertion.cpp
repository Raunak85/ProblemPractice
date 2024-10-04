#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

Node* Insert(Node* root){
    cout<<"Enter data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1){
        return nullptr;
    }

    cout<<"Enter the data for inserting to the left of "<<data<<endl;
    root->left = Insert(root->left);
    cout<<"Enter the data for inserting to the right of "<<data<<endl;
    root->right = Insert(root->right);
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


int main(){
    Node* root = nullptr;
    root = Insert(root);
    levelOrderTraversal(root);
}