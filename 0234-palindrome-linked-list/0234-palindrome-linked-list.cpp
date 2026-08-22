class Solution {
public:

    ListNode* reverseLinkedList(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* newHead = reverseLinkedList(head->next);

        ListNode* front = head->next;

        front->next = head;

        head->next = NULL;

        return newHead;
    }

    bool isPalindrome(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* newHead = reverseLinkedList(slow->next);

        ListNode* first = head;
        ListNode* second = newHead;

        while (second != NULL) {

            if (first->val != second->val) {
                reverseLinkedList(newHead);
                return false;
            }

            first = first->next;
            second = second->next;
        }
        slow->next = reverseLinkedList(newHead);  // for restoring linkedlist in original place
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna