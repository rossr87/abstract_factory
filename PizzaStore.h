#ifndef PIZZASTORE_H_INCLUDED
#define PIZZASTORE_H_INCLUDED

#include "Pizza.h"

/*
 * A PizzaStore
 * This will accept Pizza Orders from customers.
 * It in turn requests creation of a Pizza from a Pizza Factory,
 * ergo, the PizzaStore is a client of a PizzaFactory.
 */

class PizzaStore {
public:
    Pizza *order_pizza(string type) {
        /*
         * We need a pointer here, because
         * we are going to store a reference
         * to concerete object.
         */
        Pizza *client_pizza = nullptr;

        client_pizza = create_pizza(type);      /* Our subclass will actually create the Pizza, not us! */
        client_pizza->prepare();
        client_pizza->bake();
        client_pizza->cut();
        client_pizza->box();

        return client_pizza;
    }

    /*
     * Our concrete pizza factory will implement this
     * Actually make use of the PizzaFactory
     * We make it protected because we're hiding the implementation of the public
     * order_pizza class from our client.
     */

protected:
    virtual Pizza* create_pizza(string type) = 0;
};

#endif // PIZZASTORE_H_INCLUDED
