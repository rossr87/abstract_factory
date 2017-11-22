#include <string>

#include "Pizza.h"

void Pizza::bake()
{
    std::cout << "Baking...\n";
}

void Pizza::cut()
{
    std::cout << "Cutting...\n";
}

void Pizza::box()
{
    std::cout << "Boxing...\n";
}

std::string Pizza::get_name()
{
    return name;
}

void Pizza::set_name(std::string client_pizza_order)
{
    name = client_pizza_order;
}
