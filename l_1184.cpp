#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int distanceBetweenBusStops(vector<int> &distance, int start, int destination)
    {
        int dist1 = 0, dist2 = 0, n = distance.size();
        
        int i = start;
        while (i != destination)
        {
            dist1 += distance[i];
            i = (i + 1) % n;
        }

        i = start;
        while (i != destination)
        {
            i = (i - 1 + n) % n;
            dist2 += distance[i];
        }

        return min(dist1, dist2);
    }
};
int main()
{
    Solution s;
    vector<int> distance = {1, 2, 3, 4};
    int st, end;
    cout << "Enter the start and end :- ";
    cin >> st >> end;
    cout << s.distanceBetweenBusStops(distance, st, end);
    return 0;
}