#include "doctor_data.h"

heaven::Vessel::Vessel(std::string string, int n) {
    name = string;
    generation = n;
    current_system = static_cast<star_map::System>(n);
}
heaven::Vessel::Vessel(std::string string, int n, star_map::System system) {
    name = string;
    generation = n;
    current_system = system;
}

heaven::Vessel heaven::Vessel::replicate(std::string new_name){
    return Vessel(new_name, generation + 1, current_system); 
}

void heaven::Vessel::make_buster() {++busters;}

bool heaven::Vessel::shoot_buster() {
    if (busters > 0){
        --busters;
        return true;
    } else {
        return false;
    }
}
    
std::string heaven::get_older_bob(Vessel v1, Vessel v2) {
    if (v1.generation <= v2.generation) {
        return v1.name;
    } else {
        return v2.name;
    }
}

bool heaven::in_the_same_system(Vessel v1, Vessel v2) {
    return v1.current_system == v2.current_system;
}
