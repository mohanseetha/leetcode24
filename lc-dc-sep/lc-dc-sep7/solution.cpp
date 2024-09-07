// Problem: 1367. Linked List in Binary Tree

class Solution {
public:
    bool dfs(TreeNode* root, ListNode* head){
        if(head == nullptr) return true;
        if(root == nullptr) return false;
        if(root->val != head->val) return false;
        return dfs(root->left, head->next) || dfs(root->right, head->next);
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root == nullptr) return false;
        return dfs(root, head) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
