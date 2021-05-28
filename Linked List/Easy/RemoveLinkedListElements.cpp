/*
Problem at https://leetcode.com/problems/remove-linked-list-elements/
*/

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
 
/*
Time Complexity - O(n)
*/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        ListNode* temp = new ListNode();
        ListNode *ptr=head, *prev;
        // if(ptr!=NULL && ptr->val==val){
        //     head=ptr->next;
        //     delete ptr;
        // }
            prev=head;
            while(ptr){
                if(ptr==head && ptr->val==val){
                    temp=head;
                    head=temp->next;
                    prev=head;
                    ptr=head;
                    delete temp;
                    continue;
                    
                }
                else if(ptr->val==val){
                    temp=ptr;
                    prev->next=temp->next;
                    ptr=temp->next;
                    delete temp;
                    continue;
                }
                if(ptr!=NULL){
                    prev=ptr;
                    ptr=ptr->next;
                }
                
            }
        
        return head;
    }
};