/**Day50 448. Find All Numbers Disappeared in an Array
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
 

Follow up: Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.




***/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *a;
   a=(int *)malloc(numsSize*sizeof(int));
   int i=0;
   int b[100001]={0};
   for(int j=0;j<numsSize;j++)
   {
       b[nums[j]]++;
   }
   for(int j=1;j<=numsSize;j++)
   {
         if(b[j]==0)
         {
             a[i++]=j;
         }
   }
   *returnSize=i;
   return a;
}
