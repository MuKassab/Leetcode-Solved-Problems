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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = head, *newHead = NULL, *prev = NULL;
        while(temp != NULL)
        {
            prev = newHead;
            newHead = temp;
            temp = temp->next;
            newHead->next = prev;
        }
            
        return newHead;
    }
};