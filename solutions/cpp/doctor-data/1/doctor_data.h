#pragma once
#include <string>

namespace star_map {
    enum System {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
    public:
        std::string name;
        int generation;
        star_map::System current_system;
        int busters;
    
        Vessel(std::string string, int n);
    
        Vessel(std::string string, int n, star_map::System system);

        Vessel replicate(std::string);

        void make_buster();

        bool shoot_buster();
    };    
    std::string get_older_bob(Vessel v1, Vessel v2);

    bool in_the_same_system(Vessel v1, Vessel v2);
}