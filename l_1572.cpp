#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int diagonalSum(vector<vector<int>>& mat){
        int sum=0;
        int n=mat[0].size() ;
        for (int i = 0; i < n; i++) {
            sum += mat[i][i];                  
            if (i != n - i - 1)                
                sum += mat[i][n - i - 1];      
        }
        return sum ; 
    }
};
int main(){
    Solution s;
    // vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> mat = {{7,3,5,9},{6,8,9,2},{3,4,5,1},{2,0,4,8}};
    cout << s.diagonalSum(mat);
    return 0;
}