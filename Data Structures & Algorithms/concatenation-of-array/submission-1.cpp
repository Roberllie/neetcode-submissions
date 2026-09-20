#include<vector>
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) { //função retorna um vector
    //parametros como referencia para evitar copias (poupa tempo e memoria)
        int size = nums.size() * 2;
        vector<int> ans(size);

        for(int i = 0; i < nums.size(); i++){
            ans[i] = nums[i];
            ans[i + nums.size()] = nums[i];
        } 
        
        return ans;
    }
    
    
};