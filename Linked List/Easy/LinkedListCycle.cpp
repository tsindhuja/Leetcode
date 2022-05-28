/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *curr=head;
        if(head==NULL) return false;
        while(curr->next!=NULL){
            if(curr->val!=INT_MAX){
                curr->val=INT_MAX;
            }
            else{
                return true;
            }
            curr=curr->next;
        }
        return false;
        
    }
};