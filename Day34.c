/* Day 34 645. Set Mismatch

You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

 

Example 1:

Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:

Input: nums = [1,1]
Output: [1,2]
 

Constraints:

2 <= nums.length <= 104
1 <= nums[i] <= 104

  *//


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int n, int* returnSize) {
    int *arr = (int*)malloc(sizeof(int) * 2);

    char hash[n+1];
    for(int i = 0; i <= n; i++) {
        hash[i] = 0;        // Initialize hash table with 0
    }

    for(int i = 0; i < n; i++) {
        hash[nums[i]]++;    // store the frequency of numbers in array nums
    }

    for(int i = 1; i <= n; i++) {
        if(hash[i] == 2)
            arr[0] = i;     // duplicate element
        else if(hash[i] == 0)
            arr[1] = i;     // missing element
    }

    *returnSize = 2;
    return arr;
}
