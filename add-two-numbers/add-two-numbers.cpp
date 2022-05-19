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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = NULL, *curr;
        int rem = 0;
        ListNode *t1 = l1, *t2 = l2;
        while(t1 != NULL || t2 != NULL)
        {
            if(t1 == NULL)
            {
                rem += t2->val;
                t2 = t2->next;
                ListNode* nw = new ListNode(rem%10);
                curr->next = nw;
                curr = nw;
                rem -= (rem%10);
                rem /= 10;
            }
            else if(t2 == NULL)
            {
                rem += t1->val;
                t1 = t1->next;
                ListNode* nw = new ListNode(rem%10);
                cout << rem << endl;
                curr->next = nw;
                curr = nw;
                rem -= (rem%10);
                rem /= 10;
            }
            else
            {
                rem += t2->val + t1->val;
                t2 = t2->next;
                t1 = t1->next;
                ListNode* nw = new ListNode(rem%10);
                if(ans == NULL)
                    ans = curr = nw;
                else
                {
                    curr->next = nw;
                    curr = curr->next;
                }
                rem -= (rem%10);
                rem /= 10;
            }
        }
        if(rem)
        {
            ListNode* nw = new ListNode(rem);
            curr->next = nw;
        }
        return ans;
    }
};