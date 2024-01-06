/* 
Day 6 --> 06-01-2024
Problem:  347. Top K Frequent Elements
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.
 

Follow up: Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
  */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        int max, ans = 0, count = 0;
        while(count < k){
            max = 0;
            for(auto i=m.begin(); i!=m.end(); i++){
                if(i->second > max){
                    max= i->second;
                    ans = i->first;
                }
            }

            v.push_back(ans);
            m.erase(ans);
            count++;
        }

        return v;
    }
};
