#include "ClamPizza.h"

ClamPizza::~ClamPizza()
{
     std::cout << "ClamPizza Destroyed!";
}

/*
 * Used to initialize the Pizza factory that is used for requesting
 * a clam Pizza.
 */
ClamPizza::ClamPizza(PizzaIngredientFactory *stores_pizza_factory)
{
    ingredient_factory = stores_pizza_factory;
}

void ClamPizza::prepare()
{
    std::cout << "Preparing: " << this->get_name() << "\n";
    clam = ingredient_factory->create_clam();
    cheese = ingredient_factory->create_cheese();
    dough = ingredient_factory->create_dough();
    sauce = ingredient_factory->create_sauce();
}
