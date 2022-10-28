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
 ListNode* newnode(int data)
 {
     ListNode* l=new ListNode();
     l->val=data;
     l->next=NULL;
     return l;     
 }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       vector<int> v;
        int carry=0;
        int sum=0;
        while(l1 || l2 || carry)
        {
            if(l1)
            {
                sum=sum+l1->val;
                 l1=l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                   l2=l2->next;
            }
            if(carry)
            {
                sum+=carry;
            }
            carry=0;
           v.push_back(sum%10);
            carry=sum/10;
            sum=0;       
        }
        
        ListNode* m=newnode(v[0]);
        ListNode* n=new ListNode();
        n=m;
        for(int i=1;i<v.size();i++)
        {
            m->next=newnode(v[i]);
            m=m->next;
        }
        return n;
    }    
};
