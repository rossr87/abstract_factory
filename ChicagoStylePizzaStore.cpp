#include "ChicagoStylePizzaStore.h"
#include "CheesePizza.h"
#include "ClamPizza.h"

Pizza* ChicagoStylePizzaStore::create_pizza(std::string type)
{
    Pizza *client_pizza = nullptr;

    PizzaIngredientFactory *chicago_ingredient_factory = new ChicagoPizzaIngredientFactory();

    if (type == "cheese") {
        client_pizza = new CheesePizza(chicago_ingredient_factory);
        client_pizza->set_name("Chicago Style Cheese Pizza");
    }
    else if (type == "clam") {
        client_pizza = new ClamPizza(chicago_ingredient_factory);
        client_pizza->set_name("Chicago Style Clam Pizza");
    }

    delete chicago_ingredient_factory;
    chicago_ingredient_factory = nullptr;
    return client_pizza;
}
