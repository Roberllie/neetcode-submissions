class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapa;
        
        for(int i = 0; i< strs.size(); i++){ //percore cada string do vetor
            string aux = strs[i];
            sort(aux.begin(), aux.end()); //ordenar strings
            mapa[aux].push_back(strs[i]);//função para adicionar um novo item em uma lista 
            
            
       } 
        vector<vector<string>> ans;
        for(auto& par : mapa) {
    // Pega apenas a lista de palavras (par.second) e atira para a resposta final
        ans.push_back(par.second);
}

// Devolve o resultado esperado pelo LeetCode
        return ans;
    }
};
