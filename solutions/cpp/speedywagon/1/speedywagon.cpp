#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor* sensor) {
    return sensor != nullptr;
}
int activity_counter(pillar_men_sensor array[], int size){
    int acum{0};
    pillar_men_sensor* sensor{array};
    for (int i{0}; i < size; i++) {
        acum += (sensor + i)->activity;
    }
    return acum;
}
bool alarm_control(pillar_men_sensor* ptr){
    if (!connection_check(ptr)) { //check for null pointer
        return false;
    } 
    if (ptr->activity > 0){
        return true;
    } else {
        return false;
    }
}
bool uv_alarm(pillar_men_sensor* ptr){
    if (!connection_check(ptr)){ //check for null pointer
        return false;
    }
    return (uv_light_heuristic(&ptr->data) > ptr->activity);
}
// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
