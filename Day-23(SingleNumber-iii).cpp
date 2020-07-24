/*
Time complexity : O(n)
Space complexity : O(1)
Approach : Perform Xor for all the elements in array , find a XOR b , find the set bit in a XOR b , find the two single elements in the array as two groups will be formed .
*/
class Solution {
public:
vector<int> singleNumber(vector<int>& nums) 
{
        int xy = 0;
     for(int n: nums) 
         xy ^= n;
        xy &= -xy;
        vector<int> result = {0, 0};
        for(int n: nums)
        {
            if(xy & n)
                result[0] ^= n;
            else 
                result[1] ^= n;
        }
        return result;
    }
};
