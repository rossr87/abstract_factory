#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H_INCLUDED
#define CHICAGOPIZZAINGREDIENTFACTORY_H_INCLUDED

#include "PizzaIngredientFactory.h"
#include "Ingredients.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    ChicagoPizzaIngredientFactory();
    ~ChicagoPizzaIngredientFactory();
    Clam* create_clam() override;
    Cheese* create_cheese() override;
    Dough* create_dough() override;
    Sauce* create_sauce() override;
};

#endif // CHICAGOPIZZAINGREDIENTFACTORY_H_INCLUDED
