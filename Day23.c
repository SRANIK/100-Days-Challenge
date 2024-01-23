/* Day 23  504. Base 7
  Given an integer num, return a string of its base 7 representation.

 

Example 1:

Input: num = 100
Output: "202"
Example 2:

Input: num = -7
Output: "-10"
 

Constraints:

-107 <= num <= 107


  *//


char* convertToBase7(int num) {
    int res=0;
    int digit=1;

    while(num!=0){
        res+=digit*(num%7);
        num=num/7;
        digit*=10;

    }


    char* str = (char*)malloc(20 * sizeof(char));
    sprintf(str, "%d", res);
    return str;
}
