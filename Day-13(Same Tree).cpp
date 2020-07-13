/*
Time complexity : O(n)
Space complexity :O(n) (recursion stack results in linear space consumption)
My approach : Traverse both the trees simultaneously and check for the node-> val and also keep an eye on when one tree terminates faster than the other.
*/
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
class Solution {
public:
   bool flag=true;
   void preorder(TreeNode* a, TreeNode* b)
   {
       if(a==NULL and b==NULL)
           return;
       if((a==NULL and b!=NULL) or(b==NULL and a!=NULL))
       {
           flag=false;
           return;
       }
       if(a->val!=b->val)
       {
           flag=false;
           return;
       }
       
       preorder(a->left,b->left);
       preorder(a->right,b->right);
       
     return;  
   }
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        preorder(p,q);
        return flag ;
        
    }
};
