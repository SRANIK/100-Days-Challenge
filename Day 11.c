/* Day 11: 70. Climbing Stairs
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 

Constraints:

1 <= n <= 45

  */

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return climbStairs(n-1) + climbStairs(n-2);
    }
};


class Solution {
public:
    int climbStairs(int n) {
        int n2 = 1; // n - 2
        int n1 = 2; // n - 1

        if(n <= 1) return 1;

        for(int i = 3; i <= n; i++) {
            int ni = n1 + n2;
            n2 = n1; 
            n1 = ni;
        }

        return n1;
    }
};
