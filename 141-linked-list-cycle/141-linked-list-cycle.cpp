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
        set<ListNode*> vis;
        ListNode *temp = head, *fast=head;
        while(fast != NULL && fast->next != NULL && fast->next->next != NULL)
        {
            temp = temp->next;
            fast = fast->next->next;
            if(temp == fast) return true;
        }
        return false;
    }
};