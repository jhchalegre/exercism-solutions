"""Functions used in preparing Guido's gorgeous lasagna.

Learn about Guido, the creator of the Python language:
https://en.wikipedia.org/wiki/Guido_van_Rossum

This is a module docstring, used to describe the functionality
of a module and its functions and/or classes.
"""


#TODO: define the 'EXPECTED_BAKE_TIME' constant.
EXPECTED_BAKE_TIME = 40

#TODO: Remove 'pass' and complete the 'bake_time_remaining()' function below.
def bake_time_remaining(elapsed_bake_time):
    """Calculate the bake time remaining.

    const = EXPECTED_BAKE_TIME
    """

    remaining_bake_time = EXPECTED_BAKE_TIME - elapsed_bake_time

    return remaining_bake_time

#TODO: Define the 'preparation_time_in_minutes()' function below.
# You might also consider using 'PREPARATION_TIME' here, if you have it defined.
preparation_time = 2

def preparation_time_in_minutes(number_of_layers):
    """Define the time for preparation time based in the number of layers"""
    expected_preparation_time = number_of_layers * preparation_time 

    return expected_preparation_time

#TODO: define the 'elapsed_time_in_minutes()' function below.
# Remember to add a docstring (you can copy and then alter the one from bake_time_remaining.)

def elapsed_time_in_minutes(number_of_layers, elapsed_bake_time):
    """Sum the time used in prep to the time elapsed while baking, returning the total time passed"""
    total_time = number_of_layers*2 + elapsed_bake_time 
    return total_time
    
