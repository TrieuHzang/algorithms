/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
        if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode* newHead = head->next;
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;

    while (cur != NULL && cur->next != NULL) {
        struct ListNode* second = cur->next;
        struct ListNode* nextPair = second->next;

        second->next = cur;
        cur->next = nextPair;

        if (prev != NULL) {
            prev->next = second;
        }

        prev = cur;
        cur = nextPair;
    }

    return newHead;
}