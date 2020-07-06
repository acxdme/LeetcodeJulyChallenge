/*
Time complexity : O(n)
space complexity : O(1)
My approach : Similar to linked list type problem , in this initialize carry as 1 and start from right and perform addition;
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int c=1;
        for(int i= digits.size()-1;i>=0;i--)
        {
          if(digits[i]+c <= 9  and c==1)
            {
                digits[i]++;
                c=0;
            }
            if(digits[i]+c > 9)
            {
                c=1;
                digits[i]=0;
            }

        }
        
        if(c>0)
            digits.insert(digits.begin()+0,c);
        
        return digits;
    }
    
};
