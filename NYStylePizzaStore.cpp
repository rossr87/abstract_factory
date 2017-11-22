#include "NYStylePizzaStore.h"

Pizza* NYStylePizzaStore::create_pizza(std::string type)
{
    Pizza *client_pizza = nullptr;

    PizzaIngredientFactory *ny_ingredient_factory = new NYPizzaIngredientFactory();

    if (type == "cheese") {
        client_pizza = new CheesePizza(ny_ingredient_factory);
        client_pizza->set_name("New York Style Cheese Pizza");
    }
    else if (type == "clam") {
        client_pizza = new ClamPizza(ny_ingredient_factory);
        client_pizza->set_name("New York Style Clam Pizza");
    }

    delete ny_ingredient_factory;
    ny_ingredient_factory = nullptr;
    return client_pizza;
}
