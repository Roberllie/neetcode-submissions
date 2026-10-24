class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //nome_do_vetor.erase(nome_do_vetor.begin() + i);
        int contador = 0;

        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == val){
                nums.erase(nums.begin() + i);
                i--; //para compensar a dimuição do vector quando um valor é apagado
        }
        }
        return nums.size();
    }
};