/* 
Time complexity : O(1)
Space complexity :O(1)
My approach : use & with 1 to find set bit, shift result left each time and shift the given number right each time.
*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        uint32_t a=0;
        for(int i=0;i<=31;i++)
        {
            a<<=1;
            if(n & 1)
                a++;
            n>>=1;
        }
      return a;  
    }
};
