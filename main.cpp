#include <iostream>
#include <memory>

#include "Pizzas.h"
#include "Stores.h"

using namespace std;

int main()
{
    std::unique_ptr<PizzaStore> joeys_pizza_joint = std::make_unique<NYStylePizzaStore>();
    std::unique_ptr<Pizza> mojos_pizza = joeys_pizza_joint->order_pizza("cheese");

    cout << "Pizza for Mojo: " << mojos_pizza->get_name() << endl;

    std::unique_ptr<PizzaStore> tonys_pizza_joint = std::make_unique<ChicagoStylePizzaStore>();
    std::unique_ptr<Pizza> louis_pizza = tonys_pizza_joint->order_pizza("cheese");

    cout << "Pizza for Louis: " << louis_pizza->get_name() << endl;

    std::unique_ptr<Pizza> barneys_pizza = joeys_pizza_joint->order_pizza("clam");
    cout << "Pizza for Barney: " << barneys_pizza->get_name() << endl;

    std::unique_ptr<Pizza> lucys_pizza = tonys_pizza_joint->order_pizza("clam");
    cout << "Pizza for Lucy: " << lucys_pizza->get_name() << endl;

    return 0;
}
