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
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        vector<ListNode*> test;
        bool flag1 = false;
        bool flag2 = false;
      
       // ListNode* ref_copy = ref;
        while (true) {
            
            if (head1 == nullptr) {
                flag1 = true;
            }
            if (head2 == nullptr) {
                flag2 = true;
            }
            if (flag1 && flag2) {
                break;
            } else if (flag1) {
                test.push_back(head2);
                head2 = head2->next;
            } else if (flag2) {
                test.push_back(head1);
                head1 = head1->next;
            } else {
                if (head1->val <= head2->val) {
                    test.push_back(head1);
                    head1 = head1->next;
                } else {
                    test.push_back(head2);
                    head2 = head2->next;
                }
            }

        }
        if (test.size() == 0) {
            return nullptr;
        }
        ListNode* headc = test.at(0);
        ListNode* current = headc;

        // Iterate through the vector and link the nodes
        for (size_t i = 1; i < test.size(); ++i) {
            current->next = test.at(i);  // Set next of current node to the next node
            current = current->next;   // Move current to the next node
        }
        
        
        return headc;
    }
};