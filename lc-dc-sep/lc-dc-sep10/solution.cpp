// Problem: 2807. Insert Greatest Common Divisors in Linked List

class Solution {
public:
    int gcd(int a, int b){
        while(b > 0){
            int t = a;
            a = b;
            b = t % b;
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while(curr->next){
            int val1 = curr->val, val2 = curr->next->val;
            curr->next = new ListNode(gcd(val1, val2), curr->next);
            curr = curr->next->next;
        }
        return head;
    }
};