#include "raindrops.h"
#include <string>
#include <iostream>

namespace raindrops {

std::string convert(int n){
    std::string saida = "";
    if (n % 3 == 0) {
        saida = saida + "Pling";
    } 
    if (n % 5 == 0) {
        saida = saida + "Plang";
    } 
    if (n % 7 == 0) {
        saida = saida + "Plong";
    }
    if (saida == "") {
        saida = std::to_string(n);
    }
    return saida;
}

}  // namespace raindrops

