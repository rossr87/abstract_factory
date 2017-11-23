#include <memory>

#include "Pizza.h"
#include "PizzaStore.h"

std::unique_ptr<Pizza> PizzaStore::order_pizza(std::string type)
{
    std::unique_ptr<Pizza> client_pizza;

    client_pizza = create_pizza(type);
    client_pizza->prepare();
    client_pizza->bake();
    client_pizza->cut();
    client_pizza->box();

    return client_pizza;
}
