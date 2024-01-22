/* 551. Student Attendance Record I Day 22: JAn22nd 2024

You are given a string s representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:

'A': Absent.
'L': Late.
'P': Present.
The student is eligible for an attendance award if they meet both of the following criteria:

The student was absent ('A') for strictly fewer than 2 days total.
The student was never late ('L') for 3 or more consecutive days.
Return true if the student is eligible for an attendance award, or false otherwise.

 

Example 1:

Input: s = "PPALLP"
Output: true
Explanation: The student has fewer than 2 absences and was never late 3 or more consecutive days.
Example 2:

Input: s = "PPALLL"
Output: false
Explanation: The student was late 3 consecutive days in the last 3 days, so is not eligible for the award.
 

Constraints:

1 <= s.length <= 1000
s[i] is either 'A', 'L', or 'P'.


  *///




bool checkRecord(char* s) {
    int totalAbsences = 0;
    int consecutiveLateDays = 0;
    int i = 0;

    while(s[i] != '\0') {

        if (s[i] == 'A') {
            totalAbsences += 1;
            if (totalAbsences >= 2) {
                return false;
            }
            consecutiveLateDays = 0;
        } else if (s[i] == 'L') {
            consecutiveLateDays += 1;
            if (consecutiveLateDays >= 3) {
                return false;
            }
        } else {
            consecutiveLateDays = 0;
        }
        i += 1;
    }
    return true;
}
