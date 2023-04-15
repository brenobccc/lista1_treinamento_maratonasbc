#include <iostream>
#include <list>
#include <map>
#include <string>
int main() {
    int n;
    std::cin >> n;

    std::map<int, int> values;
    for(int i = 0; i<n; i++){
        int aux;
        std::cin >> aux;
        
        if(values.find(aux) == values.end()){
            values.insert({aux, 1}); 
        }else{
          values[aux] = values[aux] + 1;
        }
    }
    
    for (const auto& par : values) {
        std::cout << par.first << " aparece " << par.second << " vez(es)\n";
    } 
    
    return 0;
}