/* 
Time complexity : O(1)
Space complexity : O(1)
My approach : Just observe the addition of digits from 1 to 30 on paper!
*/

class Solution {
public:
    int addDigits(int num)
    {
        if(num==0)
            return 0;
        int answer;
         if(num%9==0)
             answer=9;
         else
             answer=num%9;
        
      return answer;  
    }
};
