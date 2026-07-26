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
        ListNode*dummyhead = new ListNode();
        ListNode*curr = dummyhead;
        ListNode*temp1 = l1;
        ListNode*temp2 = l2;
        int carry = 0;
        while(temp1 != nullptr || temp2 != nullptr || carry){
            int sum = carry;
            if(temp1 != nullptr){
                sum += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2 != nullptr){
                sum += temp2->val;
                temp2 = temp2->next;
            }
            carry = sum/10;
            ListNode*node = new ListNode(sum%10);
            curr->next =node;
            curr = curr->next; 
        }
        return dummyhead->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna