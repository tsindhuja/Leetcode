/*
Problem at https://leetcode.com/problems/middle-of-the-linked-list/

Time Complexity - O(n)
*/

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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int len=0,i;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        len=len+1;
        
            temp=head;
            i=0;
            while(i!=len/2){
                temp = temp->next;
                i++;
            }
            return temp;
        
        
    }
};