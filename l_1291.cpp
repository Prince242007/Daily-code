#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     int number_digit(int n)
//     {
//         int ans = 0;
//         while (n > 0)
//         {
//             ans++;
//             n /= 10;
//         }
//         return ans;
//     }
//     int temp_number(int n)
//     {
//         int num = 0;
//         while (n--)
//         {
//             num = num * 10 + 1;
//         }
//         return num;
//     }
//     vector<int> sequentialDigits(int low, int high)
//     {

//         vector<int> answer = {12, 123, 1234, 12345, 123456, 1234567, 12345678, 123456789};
//         vector<int> vec;

//         int lowDigit = number_digit(low);
//         int highDigit = number_digit(high);

//         for (int d = lowDigit; d <= highDigit; d++)
//         {

//             int num = answer[d - 2];
//             int add = temp_number(d);

//             while (true)
//             {

//                 if (num > high)
//                     break;

//                 if (num >= low)
//                     vec.push_back(num);

//                 if (num % 10 == 9)
//                     break;

//                 num += add;
//             }
//         }
//         return vec;
//     }
// };
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<vector<int>> seqDigit = {{12},{123},{1234},{12345},{123456},{1234567},{12345678},{123456789}};
        vector<int> ans;

        int temp = 11;
        for(int i=0;i<seqDigit.size();i++){
            for(int j=0;j<8-i;j++){

                if(j!=0) seqDigit[i].push_back(seqDigit[i][j-1] + temp); 
                
                int num = seqDigit[i][j];
                if(num>=low && num<=high) ans.push_back(num);

            }
            temp = temp * 10 + 1;
        }
        return ans;

    }
};
int main()
{

    Solution s;
    int low, high;

    cout << "Enter low and high : ";
    cin >> low >> high;

    vector<int> ans = s.sequentialDigits(low, high);

    for (int x : ans)
        cout << x << " ";

    return 0;
}