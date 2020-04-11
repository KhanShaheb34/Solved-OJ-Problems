/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    int maxLen;
    int calculateLen(TreeNode* root) {
        if(root == NULL) return 0;
        int leftLen = calculateLen(root -> left);
        int rightLen = calculateLen(root -> right);
        maxLen = max(maxLen, (leftLen+rightLen));
        return max(leftLen,rightLen)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        maxLen = 0;
        calculateLen(root);
        return maxLen;
    }
};
