#pragma once

#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(std::vector<std::string> layers, int time_per_layer=2); 

amount quantities(std::vector<std::string> layers);

void addSecretIngredient(std::vector<std::string>& my_recipe, const std::vector<std::string>& friend_recipe);

void addSecretIngredient(std::vector<std::string>& my_recipe, std::string secretIngredient);
    
std::vector<double> scaleRecipe(std::vector<double> amounts, int portions);
    
}  // namespace lasagna_master
