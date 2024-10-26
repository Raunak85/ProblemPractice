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

Node* insertIntoBST(Node* root,int data){
    if(root == nullptr){
        root = new Node(data);
        return root;
    }
    if(data < root->data){
        root->left = insertIntoBST(root->left,data);
    }else{
        root->right = insertIntoBST(root->right,data);
    }
    return root;
}


void takeUserInput(Node* &root){
    cout<<"insert data : "<<endl;
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

void levelOrder(Node* root){
    queue<Node*> q ;
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

void preorder(Node* root){
    if(root == nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
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

                // searching element in bst

bool search(Node* root,int x){
    if(root == nullptr) return false;
    if(x == root->data) return true;
    if(x < root->data){
        search(root->left,x);
    }else{
        search(root->right,x);
    }
}

                // inserting element in bst

Node* insertInBST(Node* root,int data){
    if(root == nullptr){
        return new Node(data);
    }
    if(data == root->data) {
        cout<<"Duplicate Value found insertion not possible"<<endl;
        return root;
    }
    if(data < root->data){
        root->left = insertInBST(root->left,data);
    }
    else{
        root->right = insertInBST(root->right,data);
    }
    return root;
}

//      Case 1 :      deletion leaf node in bst

Node* deleteNodeInBST(Node* root,int data){
    if(root == nullptr) return nullptr;

    if(data < root->data){
        root->left = deleteNodeInBST(root->left,data);
    }
    else if(data > root->data){
        root->right = deleteNodeInBST(root->right,data);
    }
    else{
        if(root->left == nullptr && root->right == nullptr){
            cout<<"deleted successfully !!! "<<root->data<<endl;
            delete root;
            return nullptr;
        }
    }
    return root;
}

int main(){
    Node* root = nullptr;
    takeUserInput(root);
    levelOrder(root);
    cout<<endl;
    // insertInBST(root,5);
    deleteNodeInBST(root,25);
    levelOrder(root);
    // inorder(root);
    // preorder(root);
    // postorder(root);
    // if(search(root,10)){
    //     cout<<"found";
    // }else{
    //     cout<<"Not found";
    // }

}