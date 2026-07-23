def exchange_money(budget, exchange_rate):


    value = budget / exchange_rate
    return value


def get_change(budget, exchanging_value):


    currency_left = budget - exchanging_value
    return currency_left


def get_value_of_bills(denomination, number_of_bills):


    value_bills = int(denomination * number_of_bills)
    return value_bills


def get_number_of_bills(budget, denomination):

    number_of_bills = budget // denomination
    return number_of_bills


def get_leftover_of_bills(budget, denomination):
    leftover = budget % denomination
    return leftover

def exchangeable_value(budget, exchange_rate, spread, denomination):
    fee = exchange_rate * (spread/100)
    value_with_fee = budget / (exchange_rate + fee)
    y = value_with_fee // denomination
    z = y * denomination
    return z



