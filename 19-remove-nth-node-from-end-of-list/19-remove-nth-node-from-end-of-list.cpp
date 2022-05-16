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
        ListNode* temp = head, *prev, *next;
        int sz = 0;
        while(temp != NULL)
        {
            ++sz;
            temp = temp->next;
        }
        n = sz - n + 1;
        if(n == 1) return head->next;
        temp = head;
        int cnt = 1;
        while(cnt < n)
        {
            if(cnt == n-1){
                prev = temp;
                next = temp->next->next;
            }
            temp = temp->next;
            ++cnt;
        }
        prev->next = next;
        return head;
    }
};