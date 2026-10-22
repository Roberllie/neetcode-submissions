class Solution {
public:
    bool isAnagram(string s, string t) {
        //crio dois unordered_map para guardar o char e a frequênica em que ele aparece
        unordered_map <char, int> map_s;
        unordered_map <char, int> map_t;

        if (s.size() != t.size()){
            return false;
        } //se tem tamanhos diferentes já retorna falso

        for(int i = 0; i < s.size(); i++){ //percorro ambas Strings atribuindo cada char de cada uma aos unordered_maps criados
            if (map_s.count(s[i])){ //se já existe esse char incrementa 1 na frequência dele
                map_s[s[i]]++; 
            }else{
                map_s[s[i]] = 1; //senão, adiciona o char ao unordered_map e atribui 1 a sua frequência
            }

            if (map_t.count(t[i])){
                map_t[t[i]]++;
            }else{
                map_t[t[i]]= 1;
            }
            
        }
        if (map_s == map_t){ //por fim, compara se ambos os map_s e map_t são iguais, ou seja, anagramas
            return true;
        }
        return false;
    }
};

