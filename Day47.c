/* Day 47 14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.

*/



char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 1) return strs[0];
    int i = 0;
    for(i = 0; strs[0][i] != '\0'; i++){
        char c = strs[0][i];
        for(int j = 0; j < strsSize; j++){
            if(strs[j][i] != c){
                strs[j][i] = '\0';
                return strs[j];
            }   
        }
    }
    strs[0][i] = '\0';
    return strs[0];
}
