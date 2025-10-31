#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        vector<double> answer;
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        answer.push_back(kelvin);
        answer.push_back(fahrenheit);
        return answer;
    }
};
int main()
{
    Solution s;
    int celsius;
    
    cout << "Enter the tempreture :- ";
    cin >> celsius;
    vector<double> answer  = s.convertTemperature(celsius);
    cout<< answer[0] << " "<< answer[1] ;
    return 0;
}