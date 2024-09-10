# Problem: 2807. Insert Greatest Common Divisors in Linked List

class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        def gcd(a, b):
            while b > 0:
                a, b = b, a % b
            return a
        
        curr = head
        while curr.next:
            val1, val2 = curr.val, curr.next.val
            curr.next = ListNode(gcd(val1, val2), curr.next)
            curr = curr.next.next
        return head
