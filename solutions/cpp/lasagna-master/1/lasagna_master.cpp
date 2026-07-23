#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(std::vector<std::string> layers, int time_per_layer) {
    return layers.size() * time_per_layer;
}

amount quantities(std::vector<std::string> layers){
    int c_noodles{0};
    int c_sauce{0};
    for (size_t i{0}; i < layers.size(); i++) {
        if (layers[i] == "noodles") {
            ++c_noodles;
        } else if (layers[i] == "sauce"){
            ++c_sauce;
        }
    }
    return amount{c_noodles*50, c_sauce*0.2};
}

void addSecretIngredient(std::vector<std::string>& my_recipe, const std::vector<std::string>& friend_recipe) {
    my_recipe[my_recipe.size()-1] = friend_recipe.back();
}

void addSecretIngredient(std::vector<std::string>& my_recipe, std::string secretIngredient){
    my_recipe[my_recipe.size()-1] = secretIngredient;
}

std::vector<double> scaleRecipe(std::vector<double> amounts, int portions){
    for (size_t i = 0; i < amounts.size(); i++){
        amounts[i] *= portions/2.0;
    }
    return amounts;
}
    
}  // namespace lasagna_master
