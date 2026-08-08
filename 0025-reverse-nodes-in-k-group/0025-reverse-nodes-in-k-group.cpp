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
    ListNode* getKthNode(ListNode* curr, int k) {
        while (curr != nullptr && k > 0) {
            curr = curr->next;
            k--;
        }
        return curr;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* groupPrev = dummy;

        while (true) {
            // Find kth node
            ListNode* kth = getKthNode(groupPrev, k);

            // Less than k nodes remaining
            if (kth == nullptr)
                break;

            // First node of next group
            ListNode* groupNext = kth->next;

            // Reverse current group
            ListNode* prev = groupNext;
            ListNode* curr = groupPrev->next;

            for (int i = 0; i < k; i++) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }

            // Connect previous part to reversed group
            ListNode* temp = groupPrev->next;
            groupPrev->next = kth;

            // Move groupPrev to the tail of reversed group
            groupPrev = temp;
        }

        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna