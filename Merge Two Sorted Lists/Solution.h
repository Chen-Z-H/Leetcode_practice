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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *cur = head;
        ListNode *p1 = l1, *p2 = l2;
        while (p1 != NULL || p2 != NULL) {
            cur->next = new ListNode(0);
            cur = cur->next;
            if (p1 == NULL) {
                cur->val = p2->val;
                p2 = p2->next;
            } else if (p2 == NULL) {
                cur->val = p1->val;
                p1 = p1->next;
            } else if (p1->val <= p2->val) {
                cur->val = p1->val;
                p1 = p1->next;
            } else {
                cur->val = p2->val;
                p2 = p2->next;
            }
        }
        return head->next;
    }
};