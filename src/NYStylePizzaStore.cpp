#include <memory>
#include "NYStylePizzaStore.h"

std::unique_ptr<Pizza> NYStylePizzaStore::create_pizza(std::string type)
{
    std::unique_ptr<Pizza> client_pizza;

    std::shared_ptr<PizzaIngredientFactory> ny_ingredient_factory = std::make_shared<NYPizzaIngredientFactory>();

    if (type == "cheese") {
        client_pizza = std::make_unique<CheesePizza>(ny_ingredient_factory);
        client_pizza->set_name("New York Style Cheese Pizza");
    }
    else if (type == "clam") {
        client_pizza = std::make_unique<ClamPizza>(ny_ingredient_factory);
        client_pizza->set_name("New York Style Clam Pizza");
    }
    return client_pizza;
}
