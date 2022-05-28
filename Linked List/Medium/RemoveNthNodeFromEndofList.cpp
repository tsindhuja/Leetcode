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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next == NULL && n==1){
            return NULL;
        }
        ListNode* last = head;
        ListNode* first = head, *prev;
        int count=0;
        while(last!=NULL){
            last=last->next;
            count++;
        }
         if(count-n==0)
        {
            head = first->next;
            return head;
        }
       
        int i=0;
        while(i<count-n){
            prev=first;
            first = first->next;
            i++;
        }
        if(prev->next !=NULL){
            prev->next = first->next;
        
        }
        delete(first);
        return head;
    }
};