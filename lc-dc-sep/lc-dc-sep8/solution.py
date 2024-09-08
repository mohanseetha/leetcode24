# Problem: 725. Split Linked List in Parts

class Solution:
    def splitListToParts(self, head: Optional[ListNode], k: int) -> List[Optional[ListNode]]:
        res = []
        n = 0
        curr = head
        while(curr):
            curr = curr.next
            n += 1
        splits = n // k
        rem = n % k
        curr = head
        for i in range(k):
            newSplit = ListNode(0)
            tail = newSplit
            currSplits = splits
            if rem > 0:
                rem -= 1
                currSplits += 1
            for j in range(currSplits):
                tail.next = ListNode(curr.val)
                tail = tail.next
                curr = curr.next
            res.append(newSplit.next)

        return res
        