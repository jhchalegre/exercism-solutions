namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus {
        troll,
        guest,
        user,
        mod
    };

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum Action {
        read,
        write,
        remove
    };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus poster, AccountStatus viewer) {
        if (poster == AccountStatus::troll) {
            if (viewer == AccountStatus::troll) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } 
// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action action, AccountStatus account) {
        switch (static_cast<int>(account)) {
            case 0: //troll
            case 2: //user
                switch (static_cast<int>(action)) {
                    case 0: //read
                        return true;
                    case 1: //write
                        return true;
                    case 2: //remove
                        return false;
                }
                break;
            case 1: //guest
                switch (action) {
                    case 0: //read
                        return true;
                    case 1: //write
                        return false;
                    case 2: //remove
                        return false;
                }
                break;
            case 3: //mod
                return true; //can read write and remove
        }
        return true;
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus acc1, AccountStatus acc2) {
        if (acc1 == AccountStatus::guest or acc2 == AccountStatus::guest) {
            return false;
        }
        return !((acc1 == AccountStatus::troll) xor (acc2 == AccountStatus::troll));
    }

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus acc1, AccountStatus acc2) {
        return static_cast<int>(acc1) > static_cast<int>(acc2);
    }

}  // namespace hellmath
