/*
Time complexity : O( 2^n * log n)
Space complexit : O(n)
My approach : Use of bit masking to generate all the combinations of the power set of the given vector.
*/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
       int combinations= pow(2,nums.size());
        vector<vector<int> >v;
        
       for(int i=0;i<combinations;i++)
       {
           vector<int> temp;
           for(int j=0;j<nums.size();j++)
           {
               if( i & (int)pow(2,j) )
                   temp.push_back(nums[j]);
              
           }
            v.push_back(temp);
           
       }
        
       return v;
    }
};
