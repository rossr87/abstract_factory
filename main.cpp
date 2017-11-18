#include <iostream>

#include "Pizza.h"
#include "PizzaStore.h"
#include "NYStylePizzaStore.h"
#include "ChicagoStylePizzaStore.h"

using namespace std;

int main()
{
   /*
    * First we need a store, you can't get a pizza without
    * going to a PizzaStore!
    */

    /*
     * Remember! When dealing with abstract types, we need to use a pointer
     * to be able to reference objects of their (concrete) subtypes!
     */

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



   /*
    * Now let's order a pizza.
    * //Q: Which pattern is being used to provide the pizza's ?
    */
    return 0;
}
