namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {
        public:
        int x_coordinate;
        int y_coordinate;
        int health{3};
        Alien(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
        }
        int get_health() {
            return health;
        }
        bool hit() {
            if (health > 0) {
                --health;
                return true;
            } else {
                return false;
            }
        }
        bool is_alive() {
            if (get_health() <= 0) {
                return false;
            } else {
                return true;
            }
        }
        bool teleport(int new_x, int new_y) {
            x_coordinate = new_x;
            y_coordinate = new_y;
            return true;
        }
        bool collision_detection(Alien other_alien) {
            return other_alien.x_coordinate == x_coordinate and other_alien.y_coordinate == y_coordinate;
        }
    };
}  // namespace targets
