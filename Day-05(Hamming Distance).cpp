/*
Time complexity : O(1)
Space complexity : O(1)
My approach : Find out for every bit in the number ,if the bits are different increase count, this is a basic bit manipulation problem.
*/

class Solution {
public:
    int hammingDistance(int x, int y) 
    {//0 0 0 1 - 0 1 0 0 0
        int count=0;  
        int a,b;
        for(int i=0;i<32;i++)
        {
            a= x>>i & 1;
            b= y>>i & 1;
            if(a ^ b)
                count++;
        }
      return count;  
    }
};
