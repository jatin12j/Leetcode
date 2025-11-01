class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(), nums.end());

        while (head && st.count(head->val)) {
            head = head->next; // just move head
        }

        ListNode* curr = head;
        while (curr && curr->next) {
            if (st.count(curr->next->val)) {
                curr->next = curr->next->next; // skip node only
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};
