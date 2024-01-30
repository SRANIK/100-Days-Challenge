/** 20. Valid Parentheses

20. Valid Parentheses
Solved
Easy
Topics
Companies
Hint
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.




  *///




class Solution {
public:
    bool isValid(string s) {
        int size=s.length();
        stack<char> st;
        for(int i=0;i<size;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{' ) st.push(s[i]);
            else{
                 if (st.empty())
          return false;
                if(s[i]==')') 
                    if(st.top()=='(')  st.pop();
                    else return false;
                if(s[i]==']') 
                    if(st.top()=='[')  st.pop();
                    else return false;
                if(s[i]=='}') 
                    if(st.top()=='{')  st.pop();
                    else return false;
            }
        }
        if(st.empty()) return true;
        return false;
    
    }
};
