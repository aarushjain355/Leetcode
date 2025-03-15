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
        ListNode* l1_copy = l1;
        ListNode* l2_copy = l2;
        ListNode* current = new ListNode();
        ListNode* current_copy = current;
        int carryover = 0;
        int current_sum = 0;
        if (l1_copy != nullptr) {
            current_sum += l1_copy->val;
        }
        if (l2_copy != nullptr) {
            current_sum += l2_copy->val;
        }
        current_copy->val = (l1_copy->val + l2_copy->val) % 10;
        carryover = current_sum / 10;
        cout << current_sum << endl;
        cout << carryover;
        l1_copy = l1_copy->next;
        l2_copy = l2_copy->next;
        while (l1_copy != nullptr || l2_copy != nullptr) {
            current_sum = 0;
            if (l1_copy != nullptr) {
                current_sum += l1_copy->val;
                l1_copy = l1_copy->next;
            }
            if (l2_copy != nullptr) {
                current_sum += l2_copy->val;
                l2_copy = l2_copy->next;
            }
            current_sum += carryover;
            carryover = current_sum / 10;
            ListNode* next1 = new ListNode();
            current_copy->next = next1;
            current_copy = next1;
            next1->val = current_sum % 10;           
        }
        if (carryover == 1) {
            ListNode* next1 = new ListNode();
            next1->val = 1;
            current_copy->next = next1; 
        }

        return current;
    }
};