#ifndef NYPIZZAINGREDIENTFACTORY_H_INCLUDED
#define NYPIZZAINGREDIENTFACTORY_H_INCLUDED

#include "PizzaIngredientFactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    NYPizzaIngredientFactory();
    ~NYPizzaIngredientFactory();
    Clam *create_clam() override;
    Cheese* create_cheese() override;
    Dough* create_dough() override;
    Sauce* create_sauce() override;
};

#endif // NYPIZZAINGREDIENTFACTORY_H_INCLUDED
