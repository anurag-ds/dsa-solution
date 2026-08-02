/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // Function to insert a node at the end
    void insertNode(ListNode*& head, int val) {
        ListNode* newNode = new ListNode(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        ListNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Function to find the intersection node
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        unordered_set<ListNode*> st;

        // Store all nodes of first linked list
        while (headA != NULL) {
            st.insert(headA);
            headA = headA->next;
        }

        // Traverse second linked list
        while (headB != NULL) {
            if (st.find(headB) != st.end()) {
                return headB;
            }
            headB = headB->next;
        }

        return NULL;
    }

    // Function to print linked list
    void printList(ListNode* head) {
        while (head != NULL) {
            cout << head->val;
            if (head->next != NULL)
                cout << " -> ";
            head = head->next;
        }
        cout << endl;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna