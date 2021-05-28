
/*
Problem at https://leetcode.com/problems/intersection-of-two-linked-lists/
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 /*
 Time Complexity -O(length of the longest list)
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        ListNode* pA=headA;
        ListNode* pB=headB;
        int iteration=1;
        while(iteration<=2){
            if(pA==pB) return pA;
            if(pA->next) pA=pA->next;
            else{
                pA=headB;
                iteration++;
            }
            if(pB->next) pB=pB->next;
            else{
                pB=headA;
                
            }
        }
        return NULL;
    }
};