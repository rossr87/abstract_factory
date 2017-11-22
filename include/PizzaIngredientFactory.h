#ifndef PIZZAINGREDIENTFACTORY_H_INCLUDED
#define PIZZAINGREDIENTFACTORY_H_INCLUDED
#include <memory>

#include "Ingredients.h"

class PizzaIngredientFactory {
public:
    virtual std::unique_ptr<Clam>   create_clam() = 0;
    virtual std::unique_ptr<Cheese> create_cheese() = 0;
    virtual std::unique_ptr<Dough> create_dough() = 0;
    virtual std::unique_ptr<Sauce> create_sauce() = 0;
};

#endif // PIZZAINGREDIENTFACTORY_H_INCLUDED
