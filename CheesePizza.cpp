#include "CheesePizza.h"

CheesePizza::CheesePizza()
{
    std::cout << "CheesePizza Creator\n";
}

CheesePizza::~CheesePizza()
{
    std::cout << "CheesePizza Destroyed!\n";
}

/*
 * Used to set the Factory on initialization.
 */
CheesePizza::CheesePizza(PizzaIngredientFactory *stores_pizza_factory) {
    ingredient_factory = stores_pizza_factory;
}

void CheesePizza::prepare()  {
    std::cout << "Preparing: " << this->get_name() << std::endl;
    clam = nullptr;
    cheese = ingredient_factory->create_cheese();
    dough = ingredient_factory->create_dough();
    sauce = ingredient_factory->create_sauce();
}

