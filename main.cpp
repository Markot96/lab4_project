#include "zooparkhead.h"
#include <iostream>

int main() {
    zoopark first ("San Diego Zoo", 4, 3500, 28, 1916);
    first.country = "USA";
    first.ticket_price = 7;
    first.get_inf();

    zoopark second ("Singapore", 2, 2530, 20, 1973);
    second.country = "Singapore";
    second.ticket_price = 10;
    second.get_inf();

    zoopark third ("Wellington", 1, 517, 6, 1906);
    third.country = "New Zealand";
    third.ticket_price = 6;
    third.get_inf();
}
