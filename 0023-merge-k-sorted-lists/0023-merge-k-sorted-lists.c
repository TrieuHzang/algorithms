/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = NULL;

    while (1) {
        int minIndex = -1;

        for (int i = 0; i < listsSize; i++) {
            if (lists[i] != NULL) {
                if (minIndex == -1 ||
                    lists[i]->val < lists[minIndex]->val) {
                    minIndex = i;
                }
            }
        }

        if (minIndex == -1) {
            break;
        }

        tail->next = lists[minIndex];
        tail = tail->next;

        lists[minIndex] = lists[minIndex]->next;
    }

    tail->next = NULL;
    return dummy.next;
}