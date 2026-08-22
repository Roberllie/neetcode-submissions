#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> palavra1;//chave letra e valor = frequência
        unordered_map<char, int> palavra2;

    for( int i = 0; i < s.size(); i++){
        if(palavra1.count(s[i])){
            palavra1[s[i]] = palavra1[s[i]] + 1;
        }
        else palavra1[s[i]] = 1;
        if(palavra2.count(t[i])){
            palavra2[t[i]] = palavra2[t[i]] + 1;
        }
        else palavra2[t[i]] = 1; 
    }
    
    if(palavra1 == palavra2){
        return true;
    }
    return false;
    }
};
