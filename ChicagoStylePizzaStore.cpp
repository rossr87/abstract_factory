#include <memory>

#include "ChicagoStylePizzaStore.h"
#include "CheesePizza.h"
#include "ClamPizza.h"

 std::unique_ptr<Pizza> ChicagoStylePizzaStore::create_pizza(std::string type)
{
    std::unique_ptr<Pizza> client_pizza;

    PizzaIngredientFactory *chicago_ingredient_factory = new ChicagoPizzaIngredientFactory();

    if (type == "cheese") {
        client_pizza = std::make_unique<CheesePizza>(chicago_ingredient_factory);
        client_pizza->set_name("Chicago Style Cheese Pizza");
    }
    else if (type == "clam") {
        client_pizza = std::make_unique<ClamPizza>(chicago_ingredient_factory);
        client_pizza->set_name("Chicago Style Clam Pizza");
    }
    return client_pizza;
}
