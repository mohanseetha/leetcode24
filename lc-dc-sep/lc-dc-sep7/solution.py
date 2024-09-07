# Problem: 1367. Linked List in Binary Tree

class Solution:
    def isSubPath(self, head: Optional[ListNode], root: Optional[TreeNode]) -> bool:
        if not root:
            return False
        return ( 
            self.dfs(root, head) or
            self.isSubPath(head, root.left) or
            self.isSubPath(head, root.right)
        )

    def dfs(self, root: Optional[TreeNode], head: Optional[ListNode]) -> bool:
        if not head:
            return True
        if not root:
            return False
        if root.val != head.val:
            return False
        
        return self.dfs(root.left, head.next) or self.dfs(root.right, head.next)
