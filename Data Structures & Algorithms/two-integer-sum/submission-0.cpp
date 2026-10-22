#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++){
            int complemento = target - nums[i];
            if(map.count(complemento)){
                return {map[complemento], i}; 
            }
            map[nums[i]] = i;
           
        }
        return{}; 
    }
};
