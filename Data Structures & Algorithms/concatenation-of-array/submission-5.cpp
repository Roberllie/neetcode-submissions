class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //nums[n]
        //nums[n]+nums[n] = ans[2n]
        //laço (percorre todo o nums (n))
        //ans[i] = nums[i]
        //ans[i+n] = nums[i]
        //fora do laço - retornar ans
        int tam_nums = nums.size();
        int tam_ans = tam_nums * 2;
        vector<int> ans(tam_ans);

        for(int i = 0; i < tam_nums; i++){
            ans[i] = nums[i];
            ans[i+tam_nums] = nums[i];
        }
        return ans;
    }
};