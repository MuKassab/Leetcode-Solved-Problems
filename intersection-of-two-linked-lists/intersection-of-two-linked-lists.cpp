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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ans = NULL, *temp = headA;
        while(temp != NULL)
        {
            temp->val -= 1e6;
            temp = temp->next;
        }
        temp = headB;
        while(temp != NULL && ans == NULL)
        {
            if(temp->val < 0)
                ans = temp;
            temp = temp->next;
        }
        temp = headA;
        while(temp != NULL)
        {
            temp->val += 1e6;
            temp = temp->next;
        }
        return ans;
    }
};