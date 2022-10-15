#include <bits/stdc++.h>
using namespace std;

class Tree{
    public:
        int data;
        Tree *left,*right;
        Tree(int x){
            data = x;
            left = NULL;
            right=NULL;
        }
};
Tree* insert_Node(Tree* root, int x)
{
    if(root == NULL){
        Tree *temp = new Tree(x);
        return temp;
    }
    if(root -> data > x){
        root-> left = insert_Node(root->left,x);
    }
    else{
        root-> right = insert_Node(root->right,x);
    }
    return root;

}
void inorder(Tree * root){
    if(root == NULL)
    return;
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

int main()
{
    
    Tree * root = new Tree(20);
    insert_Node(root,10);
    insert_Node(root,15);
    insert_Node(root,5);
    insert_Node(root,18);
    inorder(root);

    return 0;
}