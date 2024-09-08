// Problem: 725. Split Linked List in Parts

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> res;
        int n = 0;
        ListNode* curr = head;
        while(curr != nullptr){
            curr = curr->next;
            n++;
        }
        int splits = n / k;
        int rem = n % k;
        curr = head;
        for(int i=0; i<k; i++){
            ListNode newSplit(0);
            ListNode* tail = &newSplit;
            int currSplits = splits;
            if(rem > 0){
                rem--;
                currSplits++;
            }
            for(int j=0; j<currSplits; j++){
                tail->next = new ListNode(curr->val);
                tail = tail->next;
                curr = curr->next;
            }
            res.push_back(newSplit.next);
        }
        return res;
    }
};
