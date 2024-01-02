/* 
Day 2 --> 02-01-2024
Problem:    169. Majority Element
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
Example 1:
Input: nums = [3,2,3]
Output: 3
Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
Constraints:
n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
  */


int majorityElement(int* nums, int numsSize) {
    int j=nums[0],k=1;
for(int i = 1; i<numsSize; i++)
{
    if(nums[i] == j)
    {
        k++;
    }
    else
    {
        k--;
    }

    if(k==0)
    {
        j=nums[i];
        k=1;
    }

}
return j;

}
