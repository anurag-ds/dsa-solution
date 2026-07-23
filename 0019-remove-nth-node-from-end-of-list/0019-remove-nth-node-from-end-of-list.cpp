class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int cnt = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        // Delete first node
        if (cnt == n) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        int pos = cnt - n;

        temp = head;
        while (pos > 1) {
            temp = temp->next;
            pos--;
        }

        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna