#ifndef CHICAGOSTYLEPIZZASTORE_H_INCLUDED
#define CHICAGOSTYLEPIZZASTORE_H_INCLUDED

#include "Pizza.h"
#include "PizzaIngredientFactory.h"
#include "ChicagoPizzaIngredientFactory.h"


class ChicagoStylePizzaStore : public PizzaStore {
    Pizza *create_pizza(string type) {
        Pizza *client_pizza = nullptr;

        /*
         * We know that _we_ are a NYStylePizzaStore, and we know that we want a NYStylePizzaFactory
         * We want the Pizza Factory to persist throughout pizza orders instead of having to allocate a new object
         * each time, however, we could allocate a new object each time. It would just lead to a lot of overhead.
         * In fact, because the handle to it is on the stack, we lose the handle each time. So unless we are returning
         * it to a caller where it is saved elsewhere, shouldn't we be deleting it? They don't in HFDPs 'cos Java will
         * be using GC!
         * If you have hundreds of Pizza orders and you don't have the delete keyword used, you will run out of memory!
         */
        PizzaIngredientFactory *chicago_ingredient_factory = new ChicagoPizzaIngredientFactory();

        /*
         * We are using both the factory method and the abstract factory now.
         * The factory method is being used to create Pizza's
         * While the abstract factory is being used to create the family of related products.
         */
        //ny_ingredient_factory.
        /*
         * Create each pizza based on type.
         * We have used the factory method to allow the PizzaStores to delegate the creation of
         * particular pizzas to their subclasses, but implemented a specific abstract method.
         * By passing as an argument the ny_ingredient_Factory to each Pizza, the Pizza's each obtain
         * their ingredients via this reference.
         */
        if (type == "cheese") {
            client_pizza = new CheesePizza(chicago_ingredient_factory);
            client_pizza->set_name("Chicago Style Cheese Pizza");
        }
        /*
        else if {type == "clam"} {
            client_pizza = new ClamPizza(ny_ingredient_factory);
            client_pizza->set_name("New York Style Cheese Pizza");
        }
        */

        /*
        * Let's not delete this, because we have
        * -an object on the free store (a pizza)
        * and we have passed a reference to it back to the caller.
        * Perhaps we could pass a copy?
        */

        /*
        * Avoid memory leak:
        */
        delete chicago_ingredient_factory;
        chicago_ingredient_factory = nullptr;

        return client_pizza;
    }
};

#endif // CHICAGOSTYLEPIZZASTORE_H_INCLUDED
