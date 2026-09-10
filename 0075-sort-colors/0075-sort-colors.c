void sortColors(int* nums, int numsSize) {
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            a++;
        }
        else if (nums[i] == 1) {
            b++;
        }
        else {
            c++;
        }
    }
    int index = 0;
    for (int i = 0; i < a; i++) {
        nums[index++] = 0;
    }
    for (int i = 0; i < b; i++) {
        nums[index++] = 1;
    }
    for (int i = 0; i < c; i++) {
        nums[index++] = 2;
    }
}