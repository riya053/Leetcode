Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

class Solution {
public:
    bool isPalindrome(int x) {
        long long res=0;
        long long ori=x;
        while(x>0)
        {   int r=x%10;
            res=res*10+r;
            x=x/10;
        }
        if(res==ori){
          return true;
    }
      return false;
}

};
