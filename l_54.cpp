#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sr=0,sc=0,er=matrix.size()-1 ,ec= matrix[0].size()-1;
        vector<int> ans ;
        while(sr<=er && sc<=ec)
        {
            for(int j=sc;j<=ec;j++)
            {
                ans.push_back(matrix[sr][j]);
            }
            for(int i=sr+1;i<=er;i++)
            {
                ans.push_back(matrix[i][ec]);
            }
            for(int j=ec-1;j>=sc;j--)
            {
                if(sr==er)
                {
                break;
                }
                ans.push_back(matrix[er][j]);
            }
            for(int i=er-1;i>sr;i--)
            {
                if(sc==ec)
                {
                break;
                }
                ans.push_back(matrix[i][sc]);
            }
            sr++ ;
            sc++;
            er--;
            ec--; 
        }
        return ans; 
    }
};
int main(){
    Solution s;
    vector<int> ans1 ;
    vector<vector<int>> matrix ={{1,2,3},{4,5,6},{7,8,9}};
    ans1 = s.spiralOrder(matrix);
    for(int i=0 ; i<ans1.size();i++)
    {
        cout << ans1[i] <<"\n";
    }
    
    return 0;
}