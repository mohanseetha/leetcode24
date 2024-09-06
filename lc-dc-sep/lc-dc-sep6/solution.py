# Problem: 3217. Delete Nodes From Linked List Present in Array

class Solution:
    def modifiedList(self, nums: List[int], head: Optional[ListNode]) -> Optional[ListNode]:
        s = set()
        for num in nums:
            s.add(num)

        res = ListNode(0)
        temp = res

        while(head):
            val = head.val
            head = head.next
            if(val not in s):
                temp.next = ListNode(val)
                temp = temp.next

        return res.next
