// Problem: 3217. Delete Nodes From Linked List Present in Array

class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s;
        for(auto num: nums) s.insert(num);

        ListNode* res = new ListNode(0);
        ListNode* temp = res;

        while(head){
            int val = head->val;
            head = head->next;
            if(!s.count(val)){
                temp->next = new ListNode(val);
                temp = temp-> next;
            }
        }

        return res->next;
    }
};