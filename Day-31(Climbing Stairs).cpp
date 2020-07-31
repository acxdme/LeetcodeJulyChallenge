/*
Time complexity : O(n)
Space complexity :O(n) linear because the size of the int arr[] is equal to the size of the constraint imposed on n.
My approach : This is a dynamic programming problem , we have overlapping subproblems in climbing stairs and on close analysis it turns out to follow fibonnaci series.
  The recurrsive approach give TLE but the iterative approach works in linear time.
*/

class Solution {
public:
    int climbStairs(int n) 
    {
        int arr[47]={0};
        arr[0]=1;
        arr[1]=1;
        if(n==1)
            return 1;
        for(int i=2;i<=n;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];
            
    }
};
