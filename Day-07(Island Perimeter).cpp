/*
Time complexity : O(n^2)
Space complexity : O(1)
My approach : Traverse the given 2d matrix and for every 1 found,check which of the following sides are 1 also (i.e top,bottom,left and right).

Question: 
You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water.
Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).
The island doesn't have "lakes" (water inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

 Example:

Input:
[[0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]]

Output: 16
*/

class Solution {
public:
    
    int gocheck(vector<vector<int>>& grid,int x, int y)
    {
        int sides=0;
        if(x+1 <= grid.size()-1 and grid[x+1][y]==1)
            sides++;
        if(y+1 <=grid[0].size()-1 and grid[x][y+1]==1)
            sides++;
        if(x-1 >=0 and grid[x-1][y]==1)
            sides++;
        if(y-1 >=0 and grid[x][y-1]==1)
            sides++;
        return sides;
    }
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int answer=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    int f=gocheck(grid,i,j); //from how many sides the square(1) is covered
                    answer+=(4-f);// perimeter of a particular square(which is 4-f) is added to answer.
                }
            }
        }
      return answer;  
    }
};
