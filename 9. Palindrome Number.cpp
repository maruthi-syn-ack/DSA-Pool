// Date: 28/01/2023 |Day 1
/*
Palindrome Number
Easy
Given an integer x, return true if x is a 
palindrome
, and false otherwise.
------------------------------------------------------------------------------
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

*/

class Solution {
public:
    bool isPalindrome(int x) {
    if (x<0)
    return false;
    stack <int> st;

    int y =x;

    while (x!=0)
    {
        st.push(x%10);
        x=x/10;

    }

    while(y)
    {
        if(st.top()!=y%10)
        return false ;
        y/=10;
        st.pop();
    }

    return true ;

    }

};