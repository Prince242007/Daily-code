#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> constructRectangle(int area) {

        for (int w = sqrt(area); w >= 1; w--)
        {
            if (area % w == 0)
            {
                int l = area / w;
                return {l, w};
            }
        }

        return {};
    }
};

int main(){
    Solution s;

    int area;
    cout << "Enter the area :- ";
    cin >> area;

    vector<int> ans = s.constructRectangle(area);

    cout << ans[0] << " " << ans[1];

    return 0;
}