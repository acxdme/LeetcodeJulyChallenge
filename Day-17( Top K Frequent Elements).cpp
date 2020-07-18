/*
Time complexity : O(n logn)
Space complexity : O(n)
My approach : Create a unordered map to store the frequency (item,frequency) now store this in a vector of pairs and sort it according to frequency.Output the k items from the 
sorted vector of pairs.
*/
    static bool fn(const pair<int,int>& a , const pair<int,int>& b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int,int>> p;
        pair<int,int> q;
        for(auto it : m)
        {
            q.first=it.first;
            q.second= it.second;
            p.push_back(q);
        }
        sort(p.begin(),p.end(),fn);
        vector<int> output;
        for(int i=0;i<k;i++)
        {
            output.push_back(p[i].first);
        }
            
      return output; 
    }
