
def eat_ghost(power_pellet_active, touching_ghost):

    if power_pellet_active == True :
        if touching_ghost == True :
            return True 
        else:
            return False
    else :
        return False

def score(touching_power_pellet, touching_dot):

    if touching_power_pellet == True:
        return True
    if touching_dot == True:
        return True
    else:
        return False


def lose(power_pellet_active, touching_ghost):

    if power_pellet_active == False :
        if touching_ghost == True :
            return True 
        else :
            return False
    else :
        return False

def win(has_eaten_all_dots, power_pellet_active, touching_ghost):

    if has_eaten_all_dots == True :
        if touching_ghost == False :
            return True 
        else :
            if power_pellet_active == True :
                return True
            else :
                return False
    else :
        return False
    
    
        
