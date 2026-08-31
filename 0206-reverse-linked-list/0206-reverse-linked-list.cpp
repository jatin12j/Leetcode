/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL; //store actual reverse
        ListNode* curr = head;
        ListNode* next = NULL;
        if(head==NULL || head->next==NULL){ //edge case
            return head;
        }
        while(curr!=NULL){
            next = curr->next; //store access for futher
            curr->next = prev; // now reverse each
            prev = curr; // move 
            curr = next; //move

        }
        return prev;
    }
};