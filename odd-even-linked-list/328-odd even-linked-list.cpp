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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL)
            return head;
        //evenHead = head
        ListNode* evenTail = head;
        ListNode* oddHead = head->next;
        ListNode* oddTail = head->next;
        ListNode* temp = head->next->next;
        while(temp != NULL)
        {
            evenTail->next = temp;
            evenTail = temp;
            oddTail->next = temp->next;
            if(temp->next != NULL)
            {
                oddTail = temp->next;
                temp = temp->next;
            }
            if(temp != NULL)
                temp = temp->next;
        }
        evenTail->next = oddHead;
        return head;
    }
};