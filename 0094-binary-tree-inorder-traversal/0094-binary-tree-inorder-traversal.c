/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100 * sizeof(int));
    struct TreeNode* stack[100];

    int top = 0;
    *returnSize = 0;

    struct TreeNode* curr = root;

    while (curr != NULL || top > 0) {

        // 1. Đi hết về bên trái
        while (curr != NULL) {
            stack[top++] = curr;
            curr = curr->left;
        }

        // 2. Lấy node từ stack
        curr = stack[--top];
        result[(*returnSize)++] = curr->val;
        curr = curr->right;
    }

    return result;
}