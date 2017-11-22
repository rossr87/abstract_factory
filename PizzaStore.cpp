#include "PizzaStore.h"

Pizza* PizzaStore::order_pizza(std::string type)
{
    Pizza *client_pizza = nullptr;

    client_pizza = create_pizza(type);
    client_pizza->prepare();
    client_pizza->bake();
    client_pizza->cut();
    client_pizza->box();

    return client_pizza;
}
