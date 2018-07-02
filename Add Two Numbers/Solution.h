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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry_flag = 0;
        ListNode* head = new ListNode(0);
        ListNode* cur = head;
        while (l1 != NULL || l2 != NULL || carry_flag == 1) {
            int num1 = (l1 == NULL)?0:l1->val;
            int num2 = (l2 == NULL)?0:l2->val;
            int newdigit = num1 + num2 + carry_flag;
            if (newdigit >= 10) {
                carry_flag = 1;
                newdigit -= 10;   
            } else {
                carry_flag = 0;
            }
            cur->next = new ListNode(newdigit);
            cur = cur->next;
            l1 = (l1 == NULL)?NULL:l1->next;
            l2 = (l2 == NULL)?NULL:l2->next;
        }
        return head->next;
    }
};