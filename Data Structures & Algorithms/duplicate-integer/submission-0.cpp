#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mapa;
        for(int i = 0; i < nums.size(); i++){
            if(mapa.count(nums[i])){
                return true;
            }
            mapa[nums[i]] = 1;
        }
        return false;
    }
};