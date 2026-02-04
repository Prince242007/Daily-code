#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool isLeap(int year) {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    string dayOfTheWeek(int day, int month, int year) {
        vector<string> week = {
            "Sunday", "Monday", "Tuesday",
            "Wednesday", "Thursday", "Friday", "Saturday"
        };

        vector<int> daysInMonth = {
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };

        int totalDays = 0;

        // 1️⃣ Count days for full years
        for (int y = 1971; y < year; y++) {
            totalDays += isLeap(y) ? 366 : 365;
        }

        // 2️⃣ Count days for full months of current year
        for (int m = 1; m < month; m++) {
            totalDays += daysInMonth[m - 1];
            if (m == 2 && isLeap(year)) {
                totalDays += 1;
            }
        }

        // 3️⃣ Add current day
        totalDays += day;

        // 4️⃣ Jan 1, 1971 was Friday → index 5
        return week[(totalDays + 4) % 7];
    }
};
int main(){
    Solution s;
    int day, month,  year ;
    cout<<"Enter the day :- ";
    cin>>day;
    cout<<"Enter the month :- ";
    cin>>month;
    cout<<"Enter the year :- ";
    cin>>year;
    cout<<s.dayOfTheWeek(day,month,year) ;
    return 0;
}