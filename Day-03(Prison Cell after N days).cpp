/*
Time complexity : O(1)
Space complexity : O(1)
My approach : the pattern repeats after 14 days
*/

class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N)
    {
        int n=cells.size();
        int k = N % 14;
        if(k==0)
            k=14;
        
        vector<int> v(n,0);
        
        for(int j=0;j<k;j++)
        {
            for(int i=1;i<n-1;i++)
            {
                if(cells[i-1]==cells[i+1])
                    v[i]=1;
                else
                    v[i]=0;
            }   
          cells=v;
        }
        
     return v;  
    }
};
