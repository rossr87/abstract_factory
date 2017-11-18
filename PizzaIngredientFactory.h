#ifndef PIZZAINGREDIENTFACTORY_H_INCLUDED
#define PIZZAINGREDIENTFACTORY_H_INCLUDED

#include "Ingredients.h"

class PizzaIngredientFactory {
public:
    virtual Clam*   create_clam() = 0;
    virtual Cheese* create_cheese() = 0;
    virtual Dough* create_dough() = 0;
    virtual Sauce* create_sauce() = 0;

    //virtual ~PizzaIngredientFactory() {}
};

#endif // PIZZAINGREDIENTFACTORY_H_INCLUDED
