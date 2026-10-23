class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       //palvras que começam com as mesmas letras
       //descobrir até as letras em comum vão
       string ans;
        for (int i = 0; i < strs[0].size(); i++){
            for(int j = 1; j < strs.size(); j++){
                if (i >= strs[j].size()){
                    return ans;
                }
                if(strs[j][i] == strs[0][i]){
                }
                else return ans;
            } ans.push_back(strs[0][i]);
        }
        return ans;
    }
};

