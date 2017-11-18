#ifndef NYSTYLEPIZZASTORE_H_INCLUDED
#define NYSTYLEPIZZASTORE_H_INCLUDED

#include "PizzaStore.h"
#include "PizzaIngredientFactory.h"
#include "NYPizzaIngredientFactory.h"
#include "Pizza.h"
#include "CheesePizza.h"
#include "ClamPizza.h"

/*
 * I do the same as PizzaStore, except I have to actually implement
 * the create_pizza interface.
 */
class NYStylePizzaStore : public PizzaStore {
    Pizza *create_pizza(string type) override {
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
        //PizzaIngredientFactory ny_ingredient_Factory
        PizzaIngredientFactory *ny_ingredient_factory = new NYPizzaIngredientFactory();

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
            client_pizza = new CheesePizza(ny_ingredient_factory);
            client_pizza->set_name("New York Style Cheese Pizza");
        }
        else if (type == "clam") {
            client_pizza = new ClamPizza(ny_ingredient_factory);
            client_pizza->set_name("New York Style Clam Pizza");
        }

        /*
        * Let's not delete this, because we have
        * -an object on the free store (a pizza)
        * and we have passed a reference to it back to the caller.
        * Perhaps we could pass a copy?
        */

        /*
        * Avoid memory leak:
        */
        delete ny_ingredient_factory;
        ny_ingredient_factory = nullptr;

        return client_pizza;
    }
};

#endif // NYSTYLEPIZZASTORE_H_INCLUDED
