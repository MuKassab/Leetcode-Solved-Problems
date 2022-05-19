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
        set<ListNode*> vis;
        ListNode* temp1 = headA, *temp2 = headB;
        while(temp1 != NULL || temp2 != NULL)
        {
            if(temp1 != NULL)
            {
                if(vis.count(temp1)) return temp1;
                vis.insert(temp1);
                temp1 = temp1->next;
            }
            if(temp2 != NULL)
            {
                if(vis.count(temp2)) return temp2;
                vis.insert(temp2);
                temp2 = temp2->next;
            }
        }
        return NULL;
    }
};