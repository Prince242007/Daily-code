#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findTheWinner(int n, int k) {

        vector<int> ans1;
        for (int i = 0; i < n; i++)
            ans1.push_back(i + 1);

        int j = 0;

        while (ans1.size() > 1)
        {
            j = (j + k - 1) % ans1.size();  // FIXED
            ans1.erase(ans1.begin() + j);
        }

        return ans1[0];
    }
};

int main(){
    Solution s;
    int n,k;
    cout<<"Enter the number & Target :- ";
    cin>>n>>k;
    cout << s.findTheWinner(n,k);
}
