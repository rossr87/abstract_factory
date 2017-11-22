#include <iostream>

#include "Pizzas.h"
#include "Stores.h"

using namespace std;

int main()
{

    PizzaStore *joeys_pizza_joint = new NYStylePizzaStore();
    Pizza *mojos_pizza = joeys_pizza_joint->order_pizza("cheese");

    cout << "Pizza for Mojo: " << mojos_pizza->get_name() << endl;

    PizzaStore *tonys_pizza_joint = new ChicagoStylePizzaStore();
    Pizza *louis_pizza = tonys_pizza_joint->order_pizza("cheese");

    cout << "Pizza for Louis: " << louis_pizza->get_name() << endl;

    Pizza *barneys_pizza = joeys_pizza_joint->order_pizza("clam");
    cout << "Pizza for Barney: " << barneys_pizza->get_name() << endl;

    Pizza *lucys_pizza = tonys_pizza_joint->order_pizza("clam");
    cout << "Pizza for Lucy: " << lucys_pizza->get_name() << endl;

    return 0;
}
