/*
Time complexity  : O(n) 
Space complexity : O(1)
My approach using the formula of sum of consecutive natural number n(n+1)/2 we check for the valid number moving linearly from i=1,2,3,4...t.
*/
class Solution {
public:
    int arrangeCoins(int n) 
    {
        
        long long int i;
        for(i=1;(i*(i+1))/2<=n;i++)
        {
            // when this loop ends we will get our result as i-1;
        }
    
      return i-1;
    }
};

/* This problem can also be done using binary seach O(log n)  approach and also using maths formula O(1).
