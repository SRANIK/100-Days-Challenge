/* 
Day 4 --> 04-01-2024
Problem:242. Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
*/


bool isAnagram(char* s, char* t) {

	int char_array[26] = {0};
    int m,n;
    for(m=0;s[m]!='\0';m++);
    for(n=0;t[n]!='\0';n++);

    if(m!=n)//If the length of strings are different then return false
    {
        return false;
    }

	for (int i = 0;s[i]!='\0'; ++i) {
            char_array[s[i] - 'a']++;
            char_array[t[i] - 'a']--;
        }
	for (int i = 0; i < 26; ++i)
	{
		if (char_array[i] != 0)
			return false;
	}

	return true;
}
