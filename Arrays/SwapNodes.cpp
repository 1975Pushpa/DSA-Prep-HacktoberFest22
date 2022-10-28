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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
         }
        ListNode* t=head;
        ListNode* t1=head->next;
        ListNode* n=t1->next;
        t1->next=t;
        t->next=swapPairs(n);
   return t1;
    }
};
