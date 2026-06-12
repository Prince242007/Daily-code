#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool is_prime(int n){
        if(n < 2) return false;

        int count = 0;
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                count++;
            }
        }

        return count == 2;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto x : freq){
            if(is_prime(x.second)){
                return true;
            }
        }

        return false;
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,2,2,4,4};

    cout << s.checkPrimeFrequency(nums);

    return 0;
}