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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* list1copy = list1;
        ListNode* list2copy = list2;
        ListNode* head = new ListNode();
        ListNode* headcopy = head;
        ListNode* current = new ListNode();
        if (list1copy == nullptr) {
            return list2copy;
        }
        if (list2copy == nullptr) {
            return list1copy;
        }
        if (list1copy->val < list2copy->val) {
            head->val = list1copy->val;
            list1copy = list1copy->next;
        } else {
            head->val = list2copy->val;
            list2copy = list2copy->next;
        }
        while (list1copy != nullptr || list2copy != nullptr) {
            current = new ListNode();
            if (list1copy != nullptr && list2copy != nullptr) {
                if (list1copy->val < list2copy->val) {                   
                    current->val = list1copy->val; 
                    list1copy = list1copy->next;                   
                } else {
                    current->val = list2copy->val;
                    list2copy = list2copy->next; 
                }
            } else if (list1copy == nullptr) {
                current->val = list2copy->val;
                list2copy = list2copy->next; 
            } else {
                current->val = list1copy->val;
                list1copy = list1copy->next; 
            }
            head->next = current;
            head = current;
        }
        return headcopy;
    }
};