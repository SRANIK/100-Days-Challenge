/* 
Day 1 --> 01-01-2024
Problem:   136. Single Number
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
Example 1:
Input: nums = [2,2,1]
Output: 1
Example 2:
Input: nums = [4,1,2,1,2]
Output: 4
Example 3:
Input: nums = [1]
Output: 1
Constraints:
1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
*/


#include <stdio.h>

int singleNumber(int*, int);

int main() {
    int num[] = {4,5,6,2,1,4,5,1,2},single;
    single = singleNumber(num,9);
    printf("%d\r\n",single);
}

int singleNumber(int* nums, int numsSize) {
    int j = 0;
    for(int i = 0; i < numsSize; i++)
    {
        j = j ^ nums[i];
    }
return j;
}
