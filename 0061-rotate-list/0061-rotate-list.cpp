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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == NULL ){
            return head;
        }
        int length = 1;
        ListNode*tail = head;
        while(tail->next != NULL){
            tail= tail->next;
            length++;
        }
        tail->next = head;
        k = k%length;

        int stepdowntail = length - k;
        ListNode*newTail =head;
        for(int i=1; i<stepdowntail; i++){
            newTail = newTail->next;
        }
        ListNode*newhead = newTail->next;
        newTail->next = NULL;
        return newhead;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna