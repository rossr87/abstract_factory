#include <memory>

#include "ChicagoStylePizzaStore.h"
#include "CheesePizza.h"
#include "ClamPizza.h"

 std::unique_ptr<Pizza> ChicagoStylePizzaStore::create_pizza(std::string type)
{
    std::unique_ptr<Pizza> client_pizza;

    std::shared_ptr<PizzaIngredientFactory> chicago_ingredient_factory = std::make_shared<ChicagoPizzaIngredientFactory>();

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
