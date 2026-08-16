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
        ListNode largeDummy(0);

        ListNode* small = &smallDummy;
        ListNode* large = &largeDummy;

        ListNode* curr = head;

        while (curr != NULL) {

            if (curr->val < x) {
                small->next = curr;
                small = small->next;
            }
            else {
                large->next = curr;
                large = large->next;
            }

            curr = curr->next;
        }

        // End the large list
        large->next = NULL;

        // Connect small list with large list
        small->next = largeDummy.next;

        return smallDummy.next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna