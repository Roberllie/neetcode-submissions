#include <algorithm>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) { 
        //Complexidade tempo O(nlogn)
        //Complexidade de espaço O(1) variáveis auxiliáres, O(logn) implementação interna do sort (recursões)
        //in-place (sem criar uma nova estrutura)
        //int contador = 0;
        //laço(percorrer o vetor nums){condição(se nums[i] == val){nums{i} = 9999}senão{contador++;}}
        //nums.sort()
        //return "k = " contador, "nums = " nums;

        int contador = 0; //declarar e inicializar o contador

        for(int i = 0; i < nums.size(); i++){//percorrendo vetor nums O(n)
            if(nums[i] == val){ // O(1)
                nums[i] = INT_MAX; //maior valor inteiro do c++ (evita quebrar nos testes) O(1)
            }else{
                contador++; //O(1)
            }
        }sort(nums.begin(), nums.end()); // O(nlogn)
        return contador; //retorna somente o k, pois o vetor foi passado por referencia
    }
};