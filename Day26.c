/* Day 26 --> 560. Subarray Sum Equals K

Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 

Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107

  **//

int subarraySum(int* nums, int numsSize, int k) {
    
    int a = 0;

    for(int i = 0; i< numsSize; i++)
    {
        int sum = nums[i];

        if(sum == k)
        {
            a++;
        }

        for(int j = i+1;j<numsSize;j++)
        {
            sum = sum + nums[j];

            if(sum == k)
            {
                a++;
            }
        }

    }
    return a;

}