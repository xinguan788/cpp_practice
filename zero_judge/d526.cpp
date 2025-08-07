#include <iostream>
using namespace std;
struct node{
    int data;
    node *left, *right;
    node(int val) : data(val), left(nullptr), right(nullptr) {}
};
void insert(int val, node *root){
    if(val < root->data){
        if(root->left == nullptr){
            root->left = new node(val);
        } else {
            insert(val, root->left);
        }
    } else {
        if(root->right == nullptr){
            root->right = new node(val);
        } else {
            insert(val, root->right);
        }
    }
}

void preorder(node *root){
    if(root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int n;
    while(cin >> n){
        int x;
        cin >> x;
        node *root = new node(x);
        for(int i = 1; i < n; i++){
            cin >> x;
            insert(x, root);
        }
        preorder(root);
        cout << endl;
    }
    return 0;
}