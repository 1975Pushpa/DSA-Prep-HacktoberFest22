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

   
    ListNode* sortList(ListNode* head) {
        ListNode* l=new ListNode();
        l=head;
        
        int i=0;
       vector<int> v;
        
         while(l!=NULL)
         {
           v.push_back(l->val);
             cout<<v[i++]<<l->val;
            l=l->next;
        }
        int s=0;
         sort(v.begin(),v.end());
        
        l=head;
        for(int i=0;i<v.size();i++)
        {
            l->val=v[i];
            l=l->next;
        }
        return head;
    }
};
