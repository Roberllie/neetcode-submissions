class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int tamanho_nums = nums.size();
        int tamanho_ans = 2 * tamanho_nums;
        vector<int> ans(tamanho_ans);

        for (int i = 0; i < tamanho_nums; i++){
            ans[i] = nums[i];
            ans[i + tamanho_nums] = nums[i];
        }
        return ans;
    }
};

