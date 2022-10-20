/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isBST(TreeNode*root,long min,long max){
       if(root==NULL)
            return 1;
      else  if(root->val<=min||root->val>=max)
            return 0;
        
        return isBST(root->left,min,root->val)&&isBST(root->right,root->val,max);
        
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return 1;
        long min=LONG_MIN;
        long max=LONG_MAX;
        return isBST(root,min,max);
        
    }
};