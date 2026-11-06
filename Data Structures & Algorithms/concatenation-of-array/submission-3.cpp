#include<vector>
class Solution { //classe solução
public: //parte públlica 
    vector<int> getConcatenation(vector<int>& nums) { //função 
    //retorna um vetor de inteiros  - parametro: vetor int por referência
    //tenho um vetor chamano nums de tamanho n
    //quero retornar um vetor ans que tera tamanho 2n
    //indices do ans de 0 a n-1 tera os mesmos elemtnos de nums, de n ate 2n-1 repetira os mesmos elementos de nums, logo 
    //ans[i] = nums[i]
    //ans[i+n] = nums[i]
    //pseudo-código:
    //int vetor resposta[tamanho de nums * 2];
    //laço (int indice; indice < tamanho do vetor; indice++){
    //resposta[indice] = nums[indice]
    //resposta[indice+tamanho de nums] = nums[indice+tamanho de nums]}
    //return resposta;
    int tam_nums = nums.size();
    int tam_ans = 2 * tam_nums;
    vector<int> ans(tam_ans);

    for(int i = 0; i < tam_nums; i++){
        ans[i] = nums[i];
        ans[i+tam_nums] = nums[i];
    }
    return ans;
    }
};

