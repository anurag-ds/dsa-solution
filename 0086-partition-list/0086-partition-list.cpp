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
    ListNode* partition(ListNode* head, int x) {
        ListNode smallDummy(0);
        ListNode LargeDummy(0);

        ListNode*small = &smallDummy;
        ListNode*large = &LargeDummy;

        ListNode*temp = head;
        while(temp != NULL){
            if(temp->val < x){
                small->next = temp;
                small = small->next;
            }
            else{
                large->next = temp;
                large = large->next;
            }
            temp = temp->next;
        }
        large->next = NULL;
        small->next = LargeDummy.next;
        return smallDummy.next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna