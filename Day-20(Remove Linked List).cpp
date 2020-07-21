/*
Time complexity : O(N) 
Space complexity : O(1)
My approach : Iterative approach
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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(!head)
            return head;
        ListNode* t1=head->next;
        ListNode* t=head;
        while(t1)
        {
           if(head->val==val)
           {
               t=t->next;
               t1=t1->next;
               head=head->next;
           }
          else if(t1->val==val)
          {

              t1=t1->next;
              t->next=t1;
          }
           else
           {
               t1=t1->next;
               t=t->next;
           }
        }
        if(head->val==val)
            head=t1;
      return head;  
    }
};
