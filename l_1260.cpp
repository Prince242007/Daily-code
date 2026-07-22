#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int column = grid[0].size();
        int row = grid.size();
        vector<int>v;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
               v.push_back(grid[i][j]);  
            }
        }
        int shift=k%(row*column);
        int n=v.size();
        while(shift)
        {
            int last=v[n-1];
            for(int i=n-1;i>0;i--)
            {
                v[i]=v[i-1];
            }
            v[0]=last;
            shift--;
        }
        int count=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
               grid[i][j]=v[count++];  
            }
        }
        return grid;
    }
};
int main(){
    Solution s;
    vector<vector<int>> grid={{1,2,3},{4,5,6},{7,8,9}}; 
    int k;
    cout<<"Enter the number k :- ";
    cin>>k;
    vector<vector<int>> ans=s.shiftGrid(grid,k); 
    for (int i = 0; i < grid[0].size(); i++)
    {
        for (int j = 0; j < grid.size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}