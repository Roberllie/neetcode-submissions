#include<unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //problema quer identificar se dado um vector de entrada
        //ele possui numeros duplicados, se sim, retorna true, se não, retorna false

        //estrutura de dados para verificar se um valor já existe: hashing 
        //so verificar repeticões -> hash set 
        unordered_set<int> duplicates;

        for(int num : nums){
            if(duplicates.count(num)){
                return true;
            }
            else{
                duplicates.insert(num);
            }
        }
        return false;
    }
};