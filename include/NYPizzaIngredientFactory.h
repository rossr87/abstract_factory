#ifndef NYPIZZAINGREDIENTFACTORY_H_INCLUDED
#define NYPIZZAINGREDIENTFACTORY_H_INCLUDED

#include "PizzaIngredientFactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    NYPizzaIngredientFactory();
    ~NYPizzaIngredientFactory();
    std::unique_ptr<Clam> create_clam() override;
    std::unique_ptr<Cheese> create_cheese() override;
    std::unique_ptr<Dough> create_dough() override;
    std::unique_ptr<Sauce> create_sauce() override;
};

#endif // NYPIZZAINGREDIENTFACTORY_H_INCLUDED
